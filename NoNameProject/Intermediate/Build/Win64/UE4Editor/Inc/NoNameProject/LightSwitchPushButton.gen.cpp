// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoNameProject/LightSwitchPushButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSwitchPushButton() {}
// Cross Module References
	NONAMEPROJECT_API UClass* Z_Construct_UClass_ALightSwitchPushButton_NoRegister();
	NONAMEPROJECT_API UClass* Z_Construct_UClass_ALightSwitchPushButton();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NoNameProject();
	NONAMEPROJECT_API UFunction* Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	void ALightSwitchPushButton::StaticRegisterNativesALightSwitchPushButton()
	{
		UClass* Class = ALightSwitchPushButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleLight", &ALightSwitchPushButton::execToggleLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Light Switch" },
		{ "ModuleRelativePath", "LightSwitchPushButton.h" },
		{ "ToolTip", "declare ToggleLight function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSwitchPushButton, nullptr, "ToggleLight", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightSwitchPushButton_NoRegister()
	{
		return ALightSwitchPushButton::StaticClass();
	}
	struct Z_Construct_UClass_ALightSwitchPushButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightSwitchPushButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NoNameProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightSwitchPushButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight, "ToggleLight" }, // 2447480818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchPushButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightSwitchPushButton.h" },
		{ "ModuleRelativePath", "LightSwitchPushButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightIntensity_MetaData[] = {
		{ "Category", "Light Switch" },
		{ "ModuleRelativePath", "LightSwitchPushButton.h" },
		{ "ToolTip", "declare light intensity variable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightSwitchPushButton, LightIntensity), METADATA_PARAMS(Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightSphere_MetaData[] = {
		{ "Category", "Light Switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightSwitchPushButton.h" },
		{ "ToolTip", "declare sphere comp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightSphere = { "LightSphere", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightSwitchPushButton, LightSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_PointLight_MetaData[] = {
		{ "Category", "Light Switch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightSwitchPushButton.h" },
		{ "ToolTip", "declare point light comp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightSwitchPushButton, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_PointLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_PointLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightSwitchPushButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_LightSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitchPushButton_Statics::NewProp_PointLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightSwitchPushButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightSwitchPushButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightSwitchPushButton_Statics::ClassParams = {
		&ALightSwitchPushButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightSwitchPushButton_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ALightSwitchPushButton_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALightSwitchPushButton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALightSwitchPushButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightSwitchPushButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightSwitchPushButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightSwitchPushButton, 1377300711);
	template<> NONAMEPROJECT_API UClass* StaticClass<ALightSwitchPushButton>()
	{
		return ALightSwitchPushButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightSwitchPushButton(Z_Construct_UClass_ALightSwitchPushButton, &ALightSwitchPushButton::StaticClass, TEXT("/Script/NoNameProject"), TEXT("ALightSwitchPushButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightSwitchPushButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
