// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NONAMEPROJECT_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define NONAMEPROJECT_GameManager_generated_h

#define NoNameProject_Source_NoNameProject_GameManager_h_13_RPC_WRAPPERS
#define NoNameProject_Source_NoNameProject_GameManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define NoNameProject_Source_NoNameProject_GameManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameManager(); \
	friend struct Z_Construct_UClass_UGameManager_Statics; \
public: \
	DECLARE_CLASS(UGameManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(UGameManager)


#define NoNameProject_Source_NoNameProject_GameManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGameManager(); \
	friend struct Z_Construct_UClass_UGameManager_Statics; \
public: \
	DECLARE_CLASS(UGameManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(UGameManager)


#define NoNameProject_Source_NoNameProject_GameManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManager(UGameManager&&); \
	NO_API UGameManager(const UGameManager&); \
public:


#define NoNameProject_Source_NoNameProject_GameManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManager(UGameManager&&); \
	NO_API UGameManager(const UGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameManager)


#define NoNameProject_Source_NoNameProject_GameManager_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__itemsInventario() { return STRUCT_OFFSET(UGameManager, itemsInventario); }


#define NoNameProject_Source_NoNameProject_GameManager_h_10_PROLOG
#define NoNameProject_Source_NoNameProject_GameManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_GameManager_h_13_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_GameManager_h_13_RPC_WRAPPERS \
	NoNameProject_Source_NoNameProject_GameManager_h_13_INCLASS \
	NoNameProject_Source_NoNameProject_GameManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoNameProject_Source_NoNameProject_GameManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_GameManager_h_13_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_GameManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_GameManager_h_13_INCLASS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_GameManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NONAMEPROJECT_API UClass* StaticClass<class UGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoNameProject_Source_NoNameProject_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
