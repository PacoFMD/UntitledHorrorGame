// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/ItemActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemActor() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UItemActor_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UItemActor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
// End Cross Module References
	void UItemActor::StaticRegisterNativesUItemActor()
	{
	}
	UClass* Z_Construct_UClass_UItemActor_NoRegister()
	{
		return UItemActor::StaticClass();
	}
	struct Z_Construct_UClass_UItemActor_Statics
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
	UObject* (*const Z_Construct_UClass_UItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ItemActor.h" },
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemActor_Statics::NewProp_item_id_MetaData[] = {
		{ "Category", "Id Category" },
		{ "ModuleRelativePath", "ItemActor.h" },
		{ "ToolTip", "poder cambiar la variable desde el editor" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UItemActor_Statics::NewProp_item_id = { "item_id", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemActor, item_id), METADATA_PARAMS(Z_Construct_UClass_UItemActor_Statics::NewProp_item_id_MetaData, ARRAY_COUNT(Z_Construct_UClass_UItemActor_Statics::NewProp_item_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemActor_Statics::NewProp_item_id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemActor_Statics::ClassParams = {
		&UItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UItemActor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UItemActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UItemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemActor, 3185511760);
	template<> NONAMEPROJECT_API UClass* StaticClass<UItemActor>()
	{
		return UItemActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemActor(Z_Construct_UClass_UItemActor, &UItemActor::StaticClass, TEXT("/Script/NoNameProject"), TEXT("UItemActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
