// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/AI_Bot_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Bot_Character() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_AAI_Bot_Character_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_AAI_Bot_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_AWaypoint_NoRegister();
// End Cross Module References
	void AAI_Bot_Character::StaticRegisterNativesAAI_Bot_Character()
	{
	}
	UClass* Z_Construct_UClass_AAI_Bot_Character_NoRegister()
	{
		return AAI_Bot_Character::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Bot_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextWaypoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Bot_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI_Bot_Character.h" },
		{ "ModuleRelativePath", "AI_Bot_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Character_Statics::NewProp_NextWaypoint_MetaData[] = {
		{ "Category", "AI_Bot_Character" },
		{ "ModuleRelativePath", "AI_Bot_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_Bot_Character_Statics::NewProp_NextWaypoint = { "NextWaypoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Character, NextWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Character_Statics::NewProp_NextWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Character_Statics::NewProp_NextWaypoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_Bot_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Character_Statics::NewProp_NextWaypoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Bot_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Bot_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Bot_Character_Statics::ClassParams = {
		&AAI_Bot_Character::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_Bot_Character_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Character_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_Bot_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Bot_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Bot_Character, 3133531483);
	template<> NONAMEPROJECT_API UClass* StaticClass<AAI_Bot_Character>()
	{
		return AAI_Bot_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Bot_Character(Z_Construct_UClass_AAI_Bot_Character, &AAI_Bot_Character::StaticClass, TEXT("/Script/NoNameProject"), TEXT("AAI_Bot_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Bot_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
