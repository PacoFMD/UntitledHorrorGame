// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/Player_Status.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Status() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UPlayer_Status_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UPlayer_Status();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
// End Cross Module References
	void UPlayer_Status::StaticRegisterNativesUPlayer_Status()
	{
	}
	UClass* Z_Construct_UClass_UPlayer_Status_NoRegister()
	{
		return UPlayer_Status::StaticClass();
	}
	struct Z_Construct_UClass_UPlayer_Status_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayer_Status_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Status_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player_Status.h" },
		{ "ModuleRelativePath", "Player_Status.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayer_Status_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayer_Status>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayer_Status_Statics::ClassParams = {
		&UPlayer_Status::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayer_Status_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayer_Status_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayer_Status()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayer_Status_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayer_Status, 2692381398);
	template<> NONAMEPROJECT_API UClass* StaticClass<UPlayer_Status>()
	{
		return UPlayer_Status::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayer_Status(Z_Construct_UClass_UPlayer_Status, &UPlayer_Status::StaticClass, TEXT("/Script/NoNameProject"), TEXT("UPlayer_Status"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer_Status);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
