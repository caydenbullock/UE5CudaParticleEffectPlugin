#include "ParticleSimActor.h"
#include "cuda_runtime.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Components/InstancedStaticMeshComponent.h"

extern "C" void launchParticleKernel(
	float3* positions,
	float3* velocities,
	int numParticles,
	float dt,
	float damping,
	float3 center);

AParticleSimActor::AParticleSimActor()
{
	PrimaryActorTick.bCanEverTick = true;
	InstanceMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("ParticleInstances"));
	RootComponent = InstanceMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh.Succeeded())
	{
		InstanceMesh->SetStaticMesh(CubeMesh.Object);
	}
}

void AParticleSimActor::BeginPlay()
{
	Super::BeginPlay();
	AllocateParticleMemory();
	InitializeParticles();
	if (InstanceMesh)
	{
		InstanceMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AParticleSimActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FreeParticleMemory();
	Super::EndPlay(EndPlayReason);
}

void AParticleSimActor::AllocateParticleMemory()
{
	cudaMalloc((void**)&DevicePositions, NumParticles * sizeof(float3));
	cudaMalloc((void**)&DeviceVelocities, NumParticles * sizeof(float3));

	// Force clear memory — helps prevent random uninitialized data
	cudaMemset(DevicePositions, 0, NumParticles * sizeof(float3));
	cudaMemset(DeviceVelocities, 0, NumParticles * sizeof(float3));
}

void AParticleSimActor::FreeParticleMemory()
{
	if (DevicePositions) cudaFree(DevicePositions);
	if (DeviceVelocities) cudaFree(DeviceVelocities);
	DevicePositions = nullptr;
	DeviceVelocities = nullptr;
}

void AParticleSimActor::LaunchParticleKernel(float DeltaTime)
{
	launchParticleKernel(
		DevicePositions,
		DeviceVelocities,
		NumParticles,
		DeltaTime,
		1.f,
		make_float3(0.0f, 0.0f, 0.0f));
}

void AParticleSimActor::InitializeParticles()
{
	TArray<float3> InitPositions;
	TArray<float3> InitVelocities;
	InitPositions.SetNumUninitialized(NumParticles);
	InitVelocities.SetNumUninitialized(NumParticles);

	for (int i = 0; i < NumParticles; ++i)
	{
		float x = FMath::FRandRange(-500.0f, 500.0f);
		float y = FMath::FRandRange(-500.0f, 500.0f);
		float z = FMath::FRandRange(200.0f, 800.0f); 
		InitPositions[i] = make_float3(x, y, z);

		// Calculate initial tangential velocity
		float dx = -x;
		float dy = -y;
		float len = FMath::Sqrt(dx * dx + dy * dy);
		float vx = 0.0f;
		float vy = 0.0f;
		if (len > 1e-4f)
		{
			vx = dy / len * 300.0f; // Perpendicular direction for orbit
			vy = -dx / len * 300.0f;
		}
		InitVelocities[i] = make_float3(vx, vy, 0.0f);
	}

	cudaMemcpy(DevicePositions, InitPositions.GetData(), NumParticles * sizeof(float3), cudaMemcpyHostToDevice);
	cudaMemcpy(DeviceVelocities, InitVelocities.GetData(), NumParticles * sizeof(float3), cudaMemcpyHostToDevice);

	HostPositions.SetNum(NumParticles);
	InstanceMesh->ClearInstances();
	for (int i = 0; i < NumParticles; ++i)
	{
		HostPositions[i] = FVector(InitPositions[i].x, InitPositions[i].y, InitPositions[i].z);
		FTransform InstanceTransform(FRotator::ZeroRotator, HostPositions[i], FVector(0.2f));
		InstanceMesh->AddInstance(InstanceTransform);
	}
}

void AParticleSimActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	LaunchParticleKernel(DeltaTime);

	if (InstanceMesh->GetInstanceCount() == 0)
	{
		return;
	}
	TArray<float3> TempPositions;
	TempPositions.SetNumUninitialized(NumParticles);
	cudaMemcpy(TempPositions.GetData(), DevicePositions, NumParticles * sizeof(float3), cudaMemcpyDeviceToHost);

	for (int i = 0; i < NumParticles; ++i)
	{
		FVector Position(TempPositions[i].x, TempPositions[i].y, TempPositions[i].z);

		if (!Position.ContainsNaN() && Position.Z > -100000.0f && Position.Z < 100000.0f)
		{
			FTransform InstanceTransform(FRotator::ZeroRotator, Position, FVector(0.2f));
			InstanceMesh->UpdateInstanceTransform(i, InstanceTransform, false, true);

			//UE_LOG(LogTemp, Warning, TEXT("GPU particle 0 after copy: x=%.2f y=%.2f z=%.2f"),HostPositions[0].X, HostPositions[0].Y, HostPositions[0].Z);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[NaN/BAD] Particle %d has bad position: %s"), i, *Position.ToString());
		}
	}

	InstanceMesh->MarkRenderStateDirty();
}