// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/GameManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UGameManager_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UGameManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UGameManager::StaticRegisterNativesUGameManager()
	{
	}
	UClass* Z_Construct_UClass_UGameManager_NoRegister()
	{
		return UGameManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemsInventario_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemsInventario;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_itemsInventario_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManager_Statics::NewProp_itemsInventario_MetaData[] = {
		{ "Category", "Objetos" },
		{ "ModuleRelativePath", "GameManager.h" },
		{ "ToolTip", "poder cambiar la variable desde el editor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_itemsInventario = { "itemsInventario", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameManager, itemsInventario), METADATA_PARAMS(Z_Construct_UClass_UGameManager_Statics::NewProp_itemsInventario_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::NewProp_itemsInventario_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_itemsInventario_Inner = { "itemsInventario", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_itemsInventario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_itemsInventario_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameManager_Statics::ClassParams = {
		&UGameManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameManager, 495463213);
	template<> NONAMEPROJECT_API UClass* StaticClass<UGameManager>()
	{
		return UGameManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameManager(Z_Construct_UClass_UGameManager, &UGameManager::StaticClass, TEXT("/Script/NoNameProject"), TEXT("UGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
