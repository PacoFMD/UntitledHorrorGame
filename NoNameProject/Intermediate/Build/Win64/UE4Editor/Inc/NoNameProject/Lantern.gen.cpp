// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/Lantern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLantern() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_ULantern_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_ULantern();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
// End Cross Module References
	void ULantern::StaticRegisterNativesULantern()
	{
	}
	UClass* Z_Construct_UClass_ULantern_NoRegister()
	{
		return ULantern::StaticClass();
	}
	struct Z_Construct_UClass_ULantern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULantern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULantern_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Lantern.h" },
		{ "ModuleRelativePath", "Lantern.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULantern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULantern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULantern_Statics::ClassParams = {
		&ULantern::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULantern_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULantern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULantern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULantern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULantern, 1916492494);
	template<> NONAMEPROJECT_API UClass* StaticClass<ULantern>()
	{
		return ULantern::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULantern(Z_Construct_UClass_ULantern, &ULantern::StaticClass, TEXT("/Script/NoNameProject"), TEXT("ULantern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULantern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
