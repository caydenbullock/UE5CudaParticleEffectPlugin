// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CudaParticleSimForSonny/Public/CUDA_test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCUDA_test() {}

// Begin Cross Module References
CUDAPARTICLESIMFORSONNY_API UClass* Z_Construct_UClass_ACUDA_test();
CUDAPARTICLESIMFORSONNY_API UClass* Z_Construct_UClass_ACUDA_test_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CudaParticleSimForSonny();
// End Cross Module References

// Begin Class ACUDA_test Function SimpleCUDATest
struct Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics
{
	struct CUDA_test_eventSimpleCUDATest_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CUDATest" },
		{ "ModuleRelativePath", "Public/CUDA_test.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CUDA_test_eventSimpleCUDATest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CUDA_test_eventSimpleCUDATest_Parms), &Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACUDA_test, nullptr, "SimpleCUDATest", nullptr, nullptr, Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::CUDA_test_eventSimpleCUDATest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::CUDA_test_eventSimpleCUDATest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACUDA_test_SimpleCUDATest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACUDA_test_SimpleCUDATest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACUDA_test::execSimpleCUDATest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SimpleCUDATest();
	P_NATIVE_END;
}
// End Class ACUDA_test Function SimpleCUDATest

// Begin Class ACUDA_test
void ACUDA_test::StaticRegisterNativesACUDA_test()
{
	UClass* Class = ACUDA_test::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SimpleCUDATest", &ACUDA_test::execSimpleCUDATest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACUDA_test);
UClass* Z_Construct_UClass_ACUDA_test_NoRegister()
{
	return ACUDA_test::StaticClass();
}
struct Z_Construct_UClass_ACUDA_test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CUDA_test.h" },
		{ "ModuleRelativePath", "Public/CUDA_test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACUDA_test_SimpleCUDATest, "SimpleCUDATest" }, // 3842765979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACUDA_test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACUDA_test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CudaParticleSimForSonny,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACUDA_test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACUDA_test_Statics::ClassParams = {
	&ACUDA_test::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACUDA_test_Statics::Class_MetaDataParams), Z_Construct_UClass_ACUDA_test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACUDA_test()
{
	if (!Z_Registration_Info_UClass_ACUDA_test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACUDA_test.OuterSingleton, Z_Construct_UClass_ACUDA_test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACUDA_test.OuterSingleton;
}
template<> CUDAPARTICLESIMFORSONNY_API UClass* StaticClass<ACUDA_test>()
{
	return ACUDA_test::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACUDA_test);
ACUDA_test::~ACUDA_test() {}
// End Class ACUDA_test

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACUDA_test, ACUDA_test::StaticClass, TEXT("ACUDA_test"), &Z_Registration_Info_UClass_ACUDA_test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACUDA_test), 1917596300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_1331442578(TEXT("/Script/CudaParticleSimForSonny"),
	Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
