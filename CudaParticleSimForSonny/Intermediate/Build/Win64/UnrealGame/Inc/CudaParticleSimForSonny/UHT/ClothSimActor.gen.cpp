// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CudaParticleSimForSonny/Public/ClothSimActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothSimActor() {}

// Begin Cross Module References
CUDAPARTICLESIMFORSONNY_API UClass* Z_Construct_UClass_AClothSimActor();
CUDAPARTICLESIMFORSONNY_API UClass* Z_Construct_UClass_AClothSimActor_NoRegister();
CUDAPARTICLESIMFORSONNY_API UScriptStruct* Z_Construct_UScriptStruct_FClothConstraint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CudaParticleSimForSonny();
// End Cross Module References

// Begin ScriptStruct FClothConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothConstraint;
class UScriptStruct* FClothConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraint, (UObject*)Z_Construct_UPackage__Script_CudaParticleSimForSonny(), TEXT("ClothConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_ClothConstraint.OuterSingleton;
}
template<> CUDAPARTICLESIMFORSONNY_API UScriptStruct* StaticStruct<FClothConstraint>()
{
	return FClothConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClothSimActor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CudaParticleSimForSonny,
	nullptr,
	&NewStructOps,
	"ClothConstraint",
	nullptr,
	0,
	sizeof(FClothConstraint),
	alignof(FClothConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_ClothConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothConstraint.InnerSingleton, Z_Construct_UScriptStruct_FClothConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothConstraint.InnerSingleton;
}
// End ScriptStruct FClothConstraint

// Begin Class AClothSimActor
void AClothSimActor::StaticRegisterNativesAClothSimActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClothSimActor);
UClass* Z_Construct_UClass_AClothSimActor_NoRegister()
{
	return AClothSimActor::StaticClass();
}
struct Z_Construct_UClass_AClothSimActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ClothSimActor.h" },
		{ "ModuleRelativePath", "Public/ClothSimActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "ClothSimActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClothSimActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClothSimActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClothSimActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClothSimActor, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClothSimActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClothSimActor_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClothSimActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AClothSimActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CudaParticleSimForSonny,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClothSimActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClothSimActor_Statics::ClassParams = {
	&AClothSimActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AClothSimActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AClothSimActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClothSimActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AClothSimActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClothSimActor()
{
	if (!Z_Registration_Info_UClass_AClothSimActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClothSimActor.OuterSingleton, Z_Construct_UClass_AClothSimActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClothSimActor.OuterSingleton;
}
template<> CUDAPARTICLESIMFORSONNY_API UClass* StaticClass<AClothSimActor>()
{
	return AClothSimActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClothSimActor);
AClothSimActor::~AClothSimActor() {}
// End Class AClothSimActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ClothSimActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClothConstraint::StaticStruct, Z_Construct_UScriptStruct_FClothConstraint_Statics::NewStructOps, TEXT("ClothConstraint"), &Z_Registration_Info_UScriptStruct_ClothConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothConstraint), 1059326947U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClothSimActor, AClothSimActor::StaticClass, TEXT("AClothSimActor"), &Z_Registration_Info_UClass_AClothSimActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClothSimActor), 1932147745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ClothSimActor_h_3514607134(TEXT("/Script/CudaParticleSimForSonny"),
	Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ClothSimActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ClothSimActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ClothSimActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_ClothSimActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
