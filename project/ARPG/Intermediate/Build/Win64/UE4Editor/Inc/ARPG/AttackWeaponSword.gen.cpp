// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Attack/Public/AttackWeaponSword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackWeaponSword() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAttackWeaponSword_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAttackWeaponSword();
	ARPG_API UClass* Z_Construct_UClass_UAttackWeapon();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UAttackWeaponSword::StaticRegisterNativesUAttackWeaponSword()
	{
	}
	UClass* Z_Construct_UClass_UAttackWeaponSword_NoRegister()
	{
		return UAttackWeaponSword::StaticClass();
	}
	struct Z_Construct_UClass_UAttackWeaponSword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackWeaponSword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttackWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackWeaponSword_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Attack/Public/AttackWeaponSword.h" },
		{ "ModuleRelativePath", "Attack/Public/AttackWeaponSword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackWeaponSword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackWeaponSword>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackWeaponSword_Statics::ClassParams = {
		&UAttackWeaponSword::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttackWeaponSword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackWeaponSword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackWeaponSword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackWeaponSword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackWeaponSword, 1265330278);
	template<> ARPG_API UClass* StaticClass<UAttackWeaponSword>()
	{
		return UAttackWeaponSword::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackWeaponSword(Z_Construct_UClass_UAttackWeaponSword, &UAttackWeaponSword::StaticClass, TEXT("/Script/ARPG"), TEXT("UAttackWeaponSword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackWeaponSword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
