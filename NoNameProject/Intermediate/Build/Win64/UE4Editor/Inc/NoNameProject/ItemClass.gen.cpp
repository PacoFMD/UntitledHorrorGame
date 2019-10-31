// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/ItemClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemClass() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UItemClass_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UItemClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
// End Cross Module References
	void UItemClass::StaticRegisterNativesUItemClass()
	{
	}
	UClass* Z_Construct_UClass_UItemClass_NoRegister()
	{
		return UItemClass::StaticClass();
	}
	struct Z_Construct_UClass_UItemClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_item_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ItemClass.h" },
		{ "ModuleRelativePath", "ItemClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemClass_Statics::NewProp_item_id_MetaData[] = {
		{ "Category", "Id Category" },
		{ "ModuleRelativePath", "ItemClass.h" },
		{ "ToolTip", "poder cambiar la variable desde el editor" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UItemClass_Statics::NewProp_item_id = { "item_id", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemClass, item_id), METADATA_PARAMS(Z_Construct_UClass_UItemClass_Statics::NewProp_item_id_MetaData, ARRAY_COUNT(Z_Construct_UClass_UItemClass_Statics::NewProp_item_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemClass_Statics::NewProp_item_id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemClass_Statics::ClassParams = {
		&UItemClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemClass_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UItemClass_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UItemClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UItemClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemClass, 450418774);
	template<> NONAMEPROJECT_API UClass* StaticClass<UItemClass>()
	{
		return UItemClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemClass(Z_Construct_UClass_UItemClass, &UItemClass::StaticClass, TEXT("/Script/NoNameProject"), TEXT("UItemClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
