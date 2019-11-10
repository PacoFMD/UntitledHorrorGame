// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/AI_Bot_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Bot_Controller() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_AAI_Bot_Controller_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_AAI_Bot_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
	NONAMEPROJECT_API UFunction* Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
// End Cross Module References
	void AAI_Bot_Controller::StaticRegisterNativesAAI_Bot_Controller()
	{
		UClass* Class = AAI_Bot_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AAI_Bot_Controller::execOnPawnDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics
	{
		struct AI_Bot_Controller_eventOnPawnDetected_Parms
		{
			TArray<AActor*> DetectedPawns;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedPawns;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedPawns_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns = { "DetectedPawns", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Bot_Controller_eventOnPawnDetected_Parms, DetectedPawns), METADATA_PARAMS(Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner = { "DetectedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Bot_Controller, nullptr, "OnPawnDetected", sizeof(AI_Bot_Controller_eventOnPawnDetected_Parms), Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_Bot_Controller_NoRegister()
	{
		return AAI_Bot_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Bot_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerDetected_MetaData[];
#endif
		static void NewProp_bIsPlayerDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIFieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIFieldOfView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AILoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AILoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Bot_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_Bot_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected, "OnPawnDetected" }, // 262199990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_Bot_Controller.h" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_DistanceToPlayer_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_DistanceToPlayer = { "DistanceToPlayer", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, DistanceToPlayer), METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_DistanceToPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_DistanceToPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_bIsPlayerDetected_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	void Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_bIsPlayerDetected_SetBit(void* Obj)
	{
		((AAI_Bot_Controller*)Obj)->bIsPlayerDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_bIsPlayerDetected = { "bIsPlayerDetected", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAI_Bot_Controller), &Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_bIsPlayerDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_bIsPlayerDetected_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_bIsPlayerDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_SightConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIFieldOfView_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIFieldOfView = { "AIFieldOfView", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, AIFieldOfView), METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIFieldOfView_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIFieldOfView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius = { "AILoseSightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, AILoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge = { "AISightAge", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, AISightAge), METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius = { "AISightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, AISightRadius), METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_Bot_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_DistanceToPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_bIsPlayerDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_SightConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIFieldOfView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Bot_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Bot_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Bot_Controller_Statics::ClassParams = {
		&AAI_Bot_Controller::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_Bot_Controller_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_Bot_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Bot_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Bot_Controller, 844290887);
	template<> NONAMEPROJECT_API UClass* StaticClass<AAI_Bot_Controller>()
	{
		return AAI_Bot_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Bot_Controller(Z_Construct_UClass_AAI_Bot_Controller, &AAI_Bot_Controller::StaticClass, TEXT("/Script/NoNameProject"), TEXT("AAI_Bot_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Bot_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
