// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NONAMEPROJECT_LightSwitchPushButton_generated_h
#error "LightSwitchPushButton.generated.h already included, missing '#pragma once' in LightSwitchPushButton.h"
#endif
#define NONAMEPROJECT_LightSwitchPushButton_generated_h

#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	}


#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	}


#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitchPushButton(); \
	friend struct Z_Construct_UClass_ALightSwitchPushButton_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchPushButton, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchPushButton)


#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitchPushButton(); \
	friend struct Z_Construct_UClass_ALightSwitchPushButton_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchPushButton, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchPushButton)


#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitchPushButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitchPushButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchPushButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchPushButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchPushButton(ALightSwitchPushButton&&); \
	NO_API ALightSwitchPushButton(const ALightSwitchPushButton&); \
public:


#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchPushButton(ALightSwitchPushButton&&); \
	NO_API ALightSwitchPushButton(const ALightSwitchPushButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchPushButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchPushButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitchPushButton)


#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_PRIVATE_PROPERTY_OFFSET
#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_10_PROLOG
#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_RPC_WRAPPERS \
	NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_INCLASS \
	NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_INCLASS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_LightSwitchPushButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NONAMEPROJECT_API UClass* StaticClass<class ALightSwitchPushButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoNameProject_Source_NoNameProject_LightSwitchPushButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
