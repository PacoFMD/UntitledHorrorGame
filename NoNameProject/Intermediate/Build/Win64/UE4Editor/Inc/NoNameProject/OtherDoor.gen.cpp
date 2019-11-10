// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/OtherDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOtherDoor() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UOtherDoor_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_UOtherDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UOtherDoor::StaticRegisterNativesUOtherDoor()
	{
	}
	UClass* Z_Construct_UClass_UOtherDoor_NoRegister()
	{
		return UOtherDoor::StaticClass();
	}
	struct Z_Construct_UClass_UOtherDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOtherDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOtherDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OtherDoor.h" },
		{ "ModuleRelativePath", "OtherDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOtherDoor_Statics::NewProp_MyTrigger_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "OtherDoor.h" },
		{ "ToolTip", "poder cambiar la variable desde el editor\nUPROPERTY(VisibleAnywhere, Category = \"Defaults\"); ver el valor de la variables desde el editor, sin editarlas" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOtherDoor_Statics::NewProp_MyTrigger = { "MyTrigger", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOtherDoor, MyTrigger), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOtherDoor_Statics::NewProp_MyTrigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOtherDoor_Statics::NewProp_MyTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOtherDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOtherDoor_Statics::NewProp_MyTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOtherDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOtherDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOtherDoor_Statics::ClassParams = {
		&UOtherDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOtherDoor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UOtherDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOtherDoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOtherDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOtherDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOtherDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOtherDoor, 3435594725);
	template<> NONAMEPROJECT_API UClass* StaticClass<UOtherDoor>()
	{
		return UOtherDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOtherDoor(Z_Construct_UClass_UOtherDoor, &UOtherDoor::StaticClass, TEXT("/Script/NoNameProject"), TEXT("UOtherDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOtherDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
