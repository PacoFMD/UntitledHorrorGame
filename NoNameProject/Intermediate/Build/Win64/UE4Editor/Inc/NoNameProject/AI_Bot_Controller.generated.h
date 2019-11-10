// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NONAMEPROJECT_AI_Bot_Controller_generated_h
#error "AI_Bot_Controller.generated.h already included, missing '#pragma once' in AI_Bot_Controller.h"
#endif
#define NONAMEPROJECT_AI_Bot_Controller_generated_h

#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetected) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns); \
		P_NATIVE_END; \
	}


#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetected) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns); \
		P_NATIVE_END; \
	}


#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_Bot_Controller(); \
	friend struct Z_Construct_UClass_AAI_Bot_Controller_Statics; \
public: \
	DECLARE_CLASS(AAI_Bot_Controller, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(AAI_Bot_Controller)


#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAI_Bot_Controller(); \
	friend struct Z_Construct_UClass_AAI_Bot_Controller_Statics; \
public: \
	DECLARE_CLASS(AAI_Bot_Controller, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(AAI_Bot_Controller)


#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_Bot_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_Bot_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Bot_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Bot_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Bot_Controller(AAI_Bot_Controller&&); \
	NO_API AAI_Bot_Controller(const AAI_Bot_Controller&); \
public:


#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Bot_Controller(AAI_Bot_Controller&&); \
	NO_API AAI_Bot_Controller(const AAI_Bot_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Bot_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Bot_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI_Bot_Controller)


#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_PRIVATE_PROPERTY_OFFSET
#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_12_PROLOG
#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_RPC_WRAPPERS \
	NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_INCLASS \
	NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_INCLASS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_AI_Bot_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NONAMEPROJECT_API UClass* StaticClass<class AAI_Bot_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoNameProject_Source_NoNameProject_AI_Bot_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
