// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/ARPGCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPGCharacter() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AARPGCharacter_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AARPGCharacter();
	ARPG_API UClass* Z_Construct_UClass_AARPGCharacterBase();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UZoomStateContext_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AARPGCharacter::StaticRegisterNativesAARPGCharacter()
	{
	}
	UClass* Z_Construct_UClass_AARPGCharacter_NoRegister()
	{
		return AARPGCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AARPGCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoomState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Crosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupItemDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupItemDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quickbar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quickbar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPGCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AARPGCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ARPGCharacter.h" },
		{ "ModuleRelativePath", "ARPGCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacter_Statics::NewProp_ZoomState_MetaData[] = {
		{ "ModuleRelativePath", "ARPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacter_Statics::NewProp_ZoomState = { "ZoomState", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacter, ZoomState), Z_Construct_UClass_UZoomStateContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_ZoomState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_ZoomState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Crosshair_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Crosshair = { "Crosshair", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacter, Crosshair), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Crosshair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Crosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacter_Statics::NewProp_PickupItemDisplay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacter_Statics::NewProp_PickupItemDisplay = { "PickupItemDisplay", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacter, PickupItemDisplay), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_PickupItemDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_PickupItemDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Quickbar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Quickbar = { "Quickbar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacter, Quickbar), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Quickbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Quickbar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacter_Statics::NewProp_InventoryUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacter_Statics::NewProp_InventoryUI = { "InventoryUI", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacter, InventoryUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_InventoryUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacter_Statics::NewProp_InventoryUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARPGCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacter_Statics::NewProp_ZoomState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Crosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacter_Statics::NewProp_PickupItemDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacter_Statics::NewProp_Quickbar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacter_Statics::NewProp_InventoryUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPGCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPGCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPGCharacter_Statics::ClassParams = {
		&AARPGCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AARPGCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARPGCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPGCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPGCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPGCharacter, 2681022546);
	template<> ARPG_API UClass* StaticClass<AARPGCharacter>()
	{
		return AARPGCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPGCharacter(Z_Construct_UClass_AARPGCharacter, &AARPGCharacter::StaticClass, TEXT("/Script/ARPG"), TEXT("AARPGCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPGCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
