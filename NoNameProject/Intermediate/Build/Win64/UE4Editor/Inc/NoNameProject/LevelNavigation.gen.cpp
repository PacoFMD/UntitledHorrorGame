// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/LevelNavigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelNavigation() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_ULevelNavigation_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_ULevelNavigation();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
// End Cross Module References
	void ULevelNavigation::StaticRegisterNativesULevelNavigation()
	{
	}
	UClass* Z_Construct_UClass_ULevelNavigation_NoRegister()
	{
		return ULevelNavigation::StaticClass();
	}
	struct Z_Construct_UClass_ULevelNavigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelNavigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelNavigation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LevelNavigation.h" },
		{ "ModuleRelativePath", "LevelNavigation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelNavigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelNavigation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelNavigation_Statics::ClassParams = {
		&ULevelNavigation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelNavigation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelNavigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelNavigation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelNavigation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelNavigation, 4189300608);
	template<> NONAMEPROJECT_API UClass* StaticClass<ULevelNavigation>()
	{
		return ULevelNavigation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelNavigation(Z_Construct_UClass_ULevelNavigation, &ULevelNavigation::StaticClass, TEXT("/Script/NoNameProject"), TEXT("ULevelNavigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelNavigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
