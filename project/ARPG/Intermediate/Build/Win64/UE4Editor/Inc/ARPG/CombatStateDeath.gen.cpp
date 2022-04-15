// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CombatSystem/Public/CombatStateDeath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatStateDeath() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UCombatStateDeath_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatStateDeath();
	ARPG_API UClass* Z_Construct_UClass_UCombatState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UCombatStateDeath::StaticRegisterNativesUCombatStateDeath()
	{
	}
	UClass* Z_Construct_UClass_UCombatStateDeath_NoRegister()
	{
		return UCombatStateDeath::StaticClass();
	}
	struct Z_Construct_UClass_UCombatStateDeath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatStateDeath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatStateDeath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatSystem/Public/CombatStateDeath.h" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateDeath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatStateDeath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatStateDeath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatStateDeath_Statics::ClassParams = {
		&UCombatStateDeath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatStateDeath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatStateDeath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatStateDeath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatStateDeath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatStateDeath, 2574793042);
	template<> ARPG_API UClass* StaticClass<UCombatStateDeath>()
	{
		return UCombatStateDeath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatStateDeath(Z_Construct_UClass_UCombatStateDeath, &UCombatStateDeath::StaticClass, TEXT("/Script/ARPG"), TEXT("UCombatStateDeath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatStateDeath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
