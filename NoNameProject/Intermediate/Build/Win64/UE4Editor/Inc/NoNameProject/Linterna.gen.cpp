// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/Linterna.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinterna() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_ULinterna_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_ULinterna();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
// End Cross Module References
	void ULinterna::StaticRegisterNativesULinterna()
	{
	}
	UClass* Z_Construct_UClass_ULinterna_NoRegister()
	{
		return ULinterna::StaticClass();
	}
	struct Z_Construct_UClass_ULinterna_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinterna_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinterna_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Linterna.h" },
		{ "ModuleRelativePath", "Linterna.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinterna_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinterna>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULinterna_Statics::ClassParams = {
		&ULinterna::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULinterna_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULinterna_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinterna()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULinterna_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULinterna, 2146496928);
	template<> NONAMEPROJECT_API UClass* StaticClass<ULinterna>()
	{
		return ULinterna::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULinterna(Z_Construct_UClass_ULinterna, &ULinterna::StaticClass, TEXT("/Script/NoNameProject"), TEXT("ULinterna"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinterna);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
