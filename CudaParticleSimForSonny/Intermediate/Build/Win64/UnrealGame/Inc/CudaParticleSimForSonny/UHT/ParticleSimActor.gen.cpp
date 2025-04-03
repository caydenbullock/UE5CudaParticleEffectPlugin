// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CudaParticleSimForSonny/Public/ParticleSimActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSimActor() {}

// Begin Cross Module References
CUDAPARTICLESIMFORSONNY_API UClass* Z_Construct_UClass_AParticleSimActor();
CUDAPARTICLESIMFORSONNY_API UClass* Z_Construct_UClass_AParticleSimActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CudaParticleSimForSonny();
// End Cross Module References

// Begin Class AParticleSimActor
void AParticleSimActor::StaticRegisterNativesAParticleSimActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AParticleSimActor);
UClass* Z_Construct_UClass_AParticleSimActor_NoRegister()
{
	return AParticleSimActor::StaticClass();
}
struct Z_Construct_UClass_AParticleSimActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ParticleSimActor.h" },
		{ "ModuleRelativePath", "Public/ParticleSimActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceMesh_MetaData[] = {
		{ "Category", "ParticleSimActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParticleSimActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanceMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticleSimActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParticleSimActor_Statics::NewProp_InstanceMesh = { "InstanceMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParticleSimActor, InstanceMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceMesh_MetaData), NewProp_InstanceMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParticleSimActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticleSimActor_Statics::NewProp_InstanceMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParticleSimActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AParticleSimActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CudaParticleSimForSonny,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParticleSimActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AParticleSimActor_Statics::ClassParams = {
	&AParticleSimActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AParticleSimActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AParticleSimActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParticleSimActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AParticleSimActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AParticleSimActor()
{
	if (!Z_Registration_Info_UClass_AParticleSimActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParticleSimActor.OuterSingleton, Z_Construct_UClass_AParticleSimActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AParticleSimActor.OuterSingleton;
}
template<> CUDAPARTICLESIMFORSONNY_API UClass* StaticClass<AParticleSimActor>()
{
	return AParticleSimActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AParticleSimActor);
AParticleSimActor::~AParticleSimActor() {}
// End Class AParticleSimActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ParticleSimActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParticleSimActor, AParticleSimActor::StaticClass, TEXT("AParticleSimActor"), &Z_Registration_Info_UClass_AParticleSimActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParticleSimActor), 764230469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ParticleSimActor_h_1352397240(TEXT("/Script/CudaParticleSimForSonny"),
	Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ParticleSimActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ParticleSimActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
