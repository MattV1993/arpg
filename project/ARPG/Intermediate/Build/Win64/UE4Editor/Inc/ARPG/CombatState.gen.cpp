// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CombatSystem/Public/CombatState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatState() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UCombatState_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UCombatState::StaticRegisterNativesUCombatState()
	{
	}
	UClass* Z_Construct_UClass_UCombatState_NoRegister()
	{
		return UCombatState::StaticClass();
	}
	struct Z_Construct_UClass_UCombatState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatSystem/Public/CombatState.h" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatState_Statics::ClassParams = {
		&UCombatState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatState, 1193096432);
	template<> ARPG_API UClass* StaticClass<UCombatState>()
	{
		return UCombatState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatState(Z_Construct_UClass_UCombatState, &UCombatState::StaticClass, TEXT("/Script/ARPG"), TEXT("UCombatState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
