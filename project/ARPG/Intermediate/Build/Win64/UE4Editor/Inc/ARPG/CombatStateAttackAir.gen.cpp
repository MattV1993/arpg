// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CombatSystem/Public/CombatStateAttackAir.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatStateAttackAir() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UCombatStateAttackAir_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatStateAttackAir();
	ARPG_API UClass* Z_Construct_UClass_UCombatState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UCombatStateAttackAir::StaticRegisterNativesUCombatStateAttackAir()
	{
	}
	UClass* Z_Construct_UClass_UCombatStateAttackAir_NoRegister()
	{
		return UCombatStateAttackAir::StaticClass();
	}
	struct Z_Construct_UClass_UCombatStateAttackAir_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatStateAttackAir_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatStateAttackAir_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CombatSystem/Public/CombatStateAttackAir.h" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateAttackAir.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatStateAttackAir_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatStateAttackAir>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatStateAttackAir_Statics::ClassParams = {
		&UCombatStateAttackAir::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatStateAttackAir_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatStateAttackAir_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatStateAttackAir()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatStateAttackAir_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatStateAttackAir, 3670408095);
	template<> ARPG_API UClass* StaticClass<UCombatStateAttackAir>()
	{
		return UCombatStateAttackAir::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatStateAttackAir(Z_Construct_UClass_UCombatStateAttackAir, &UCombatStateAttackAir::StaticClass, TEXT("/Script/ARPG"), TEXT("UCombatStateAttackAir"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatStateAttackAir);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
