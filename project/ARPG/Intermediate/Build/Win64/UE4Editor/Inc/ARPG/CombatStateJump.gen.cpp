// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CombatSystem/Public/CombatStateJump.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatStateJump() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UCombatStateJump_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatStateJump();
	ARPG_API UClass* Z_Construct_UClass_UCombatState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UCombatStateJump::StaticRegisterNativesUCombatStateJump()
	{
	}
	UClass* Z_Construct_UClass_UCombatStateJump_NoRegister()
	{
		return UCombatStateJump::StaticClass();
	}
	struct Z_Construct_UClass_UCombatStateJump_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatStateJump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatStateJump_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatSystem/Public/CombatStateJump.h" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateJump.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatStateJump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatStateJump>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatStateJump_Statics::ClassParams = {
		&UCombatStateJump::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatStateJump_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatStateJump_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatStateJump()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatStateJump_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatStateJump, 621209461);
	template<> ARPG_API UClass* StaticClass<UCombatStateJump>()
	{
		return UCombatStateJump::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatStateJump(Z_Construct_UClass_UCombatStateJump, &UCombatStateJump::StaticClass, TEXT("/Script/ARPG"), TEXT("UCombatStateJump"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatStateJump);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
