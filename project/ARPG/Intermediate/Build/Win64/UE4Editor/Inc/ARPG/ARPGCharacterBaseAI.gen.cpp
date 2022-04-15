// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/AI/Public/ARPGCharacterBaseAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPGCharacterBaseAI() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AARPGCharacterBaseAI_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AARPGCharacterBaseAI();
	ARPG_API UClass* Z_Construct_UClass_AARPGCharacterBase();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void AARPGCharacterBaseAI::StaticRegisterNativesAARPGCharacterBaseAI()
	{
	}
	UClass* Z_Construct_UClass_AARPGCharacterBaseAI_NoRegister()
	{
		return AARPGCharacterBaseAI::StaticClass();
	}
	struct Z_Construct_UClass_AARPGCharacterBaseAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPGCharacterBaseAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AARPGCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBaseAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/Public/ARPGCharacterBaseAI.h" },
		{ "ModuleRelativePath", "AI/Public/ARPGCharacterBaseAI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPGCharacterBaseAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPGCharacterBaseAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPGCharacterBaseAI_Statics::ClassParams = {
		&AARPGCharacterBaseAI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBaseAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBaseAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPGCharacterBaseAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPGCharacterBaseAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPGCharacterBaseAI, 585484869);
	template<> ARPG_API UClass* StaticClass<AARPGCharacterBaseAI>()
	{
		return AARPGCharacterBaseAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPGCharacterBaseAI(Z_Construct_UClass_AARPGCharacterBaseAI, &AARPGCharacterBaseAI::StaticClass, TEXT("/Script/ARPG"), TEXT("AARPGCharacterBaseAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPGCharacterBaseAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
