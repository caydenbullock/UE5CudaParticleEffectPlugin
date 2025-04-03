#pragma once

#include <vector_types.h>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "ParticleSimActor.generated.h"

UCLASS()
class CUDAPARTICLESIMFORSONNY_API AParticleSimActor : public AActor
{
	GENERATED_BODY()

public:
	AParticleSimActor();
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	void AllocateParticleMemory();
	void FreeParticleMemory();
	void InitializeParticles();
	void LaunchParticleKernel(float DeltaTime);
	

	float3* DevicePositions = nullptr;
	float3* DeviceVelocities = nullptr;

	TArray<FVector> HostPositions;
	TArray<FVector> Normals;
	TArray<FProcMeshTangent> Tangents;
	TArray<FVector2D> UVs;
	TArray<FLinearColor> VertexColors;
	TArray<int32> Triangles;
	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* InstanceMesh;

	static constexpr int NumParticles = 1024;
};
