// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NONAMEPROJECT_Waypoint_generated_h
#error "Waypoint.generated.h already included, missing '#pragma once' in Waypoint.h"
#endif
#define NONAMEPROJECT_Waypoint_generated_h

#define NoNameProject_Source_NoNameProject_Waypoint_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerEnter(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define NoNameProject_Source_NoNameProject_Waypoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerEnter) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayerEnter(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define NoNameProject_Source_NoNameProject_Waypoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaypoint(); \
	friend struct Z_Construct_UClass_AWaypoint_Statics; \
public: \
	DECLARE_CLASS(AWaypoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(AWaypoint)


#define NoNameProject_Source_NoNameProject_Waypoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWaypoint(); \
	friend struct Z_Construct_UClass_AWaypoint_Statics; \
public: \
	DECLARE_CLASS(AWaypoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NoNameProject"), NO_API) \
	DECLARE_SERIALIZER(AWaypoint)


#define NoNameProject_Source_NoNameProject_Waypoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaypoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaypoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypoint(AWaypoint&&); \
	NO_API AWaypoint(const AWaypoint&); \
public:


#define NoNameProject_Source_NoNameProject_Waypoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypoint(AWaypoint&&); \
	NO_API AWaypoint(const AWaypoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaypoint)


#define NoNameProject_Source_NoNameProject_Waypoint_h_13_PRIVATE_PROPERTY_OFFSET
#define NoNameProject_Source_NoNameProject_Waypoint_h_10_PROLOG
#define NoNameProject_Source_NoNameProject_Waypoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_Waypoint_h_13_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_Waypoint_h_13_RPC_WRAPPERS \
	NoNameProject_Source_NoNameProject_Waypoint_h_13_INCLASS \
	NoNameProject_Source_NoNameProject_Waypoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoNameProject_Source_NoNameProject_Waypoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoNameProject_Source_NoNameProject_Waypoint_h_13_PRIVATE_PROPERTY_OFFSET \
	NoNameProject_Source_NoNameProject_Waypoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_Waypoint_h_13_INCLASS_NO_PURE_DECLS \
	NoNameProject_Source_NoNameProject_Waypoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NONAMEPROJECT_API UClass* StaticClass<class AWaypoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoNameProject_Source_NoNameProject_Waypoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
