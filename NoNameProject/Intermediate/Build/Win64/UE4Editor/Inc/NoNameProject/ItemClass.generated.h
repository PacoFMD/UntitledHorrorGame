// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NONAMEPROJECT_ItemClass_generated_h
#error "ItemClass.generated.h already included, missing '#pragma once' in ItemClass.h"
#endif
#define NONAMEPROJECT_ItemClass_generated_h

#define NoNameProject_Source_NoNameProject_ItemClass_h_13_RPC_WRAPPERS
#define NoNameProject_Source_NoNameProject_ItemClass_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define NoNameProject_Source_NoNameProject_ItemClass_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemClass(); \
	friend struct Z_Construct_UClass_UItemClass_Statics; \
public: \
	DECLARE_CLASS(UItemClass, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(UItemClass)


#define NoNameProject_Source_NoNameProject_ItemClass_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUItemClass(); \
	friend struct Z_Construct_UClass_UItemClass_Statics; \
public: \
	DECLARE_CLASS(UItemClass, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(UItemClass)


#define NoNameProject_Source_NoNameProject_ItemClass_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemClass(UItemClass&&); \
	NO_API UItemClass(const UItemClass&); \
public:


#define NoNameProject_Source_NoNameProject_ItemClass_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemClass(UItemClass&&); \
	NO_API UItemClass(const UItemClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemClass)


#define NoNameProject_Source_NoNameProject_ItemClass_h_13_PRIVATE_PROPERTY_OFFSET
#define NoNameProject_Source_NoNameProject_ItemClass_h_10_PROLOG
#define NoNameProject_Source_NoNameProject_ItemClass_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_ItemClass_h_13_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_ItemClass_h_13_RPC_WRAPPERS \
	NoNameProject_Source_NoNameProject_ItemClass_h_13_INCLASS \
	NoNameProject_Source_NoNameProject_ItemClass_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoNameProject_Source_NoNameProject_ItemClass_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_ItemClass_h_13_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_ItemClass_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_ItemClass_h_13_INCLASS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_ItemClass_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NONAMEPROJECT_API UClass* StaticClass<class UItemClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoNameProject_Source_NoNameProject_ItemClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
