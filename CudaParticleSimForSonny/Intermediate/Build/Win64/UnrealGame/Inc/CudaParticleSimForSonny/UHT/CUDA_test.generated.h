// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CUDA_test.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUDAPARTICLESIMFORSONNY_CUDA_test_generated_h
#error "CUDA_test.generated.h already included, missing '#pragma once' in CUDA_test.h"
#endif
#define CUDAPARTICLESIMFORSONNY_CUDA_test_generated_h

#define FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSimpleCUDATest);


#define FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACUDA_test(); \
	friend struct Z_Construct_UClass_ACUDA_test_Statics; \
public: \
	DECLARE_CLASS(ACUDA_test, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CudaParticleSimForSonny"), NO_API) \
	DECLARE_SERIALIZER(ACUDA_test)


#define FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACUDA_test(ACUDA_test&&); \
	ACUDA_test(const ACUDA_test&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACUDA_test); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACUDA_test); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACUDA_test) \
	NO_API virtual ~ACUDA_test();


#define FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_10_PROLOG
#define FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_13_INCLASS_NO_PURE_DECLS \
	FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUDAPARTICLESIMFORSONNY_API UClass* StaticClass<class ACUDA_test>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blaster_Plugins_CudaParticleSimForSonny_Source_CudaParticleSimForSonny_Public_CUDA_test_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
