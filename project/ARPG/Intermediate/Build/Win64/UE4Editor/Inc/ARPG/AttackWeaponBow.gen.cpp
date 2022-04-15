// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Attack/Public/AttackWeaponBow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackWeaponBow() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAttackWeaponBow_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAttackWeaponBow();
	ARPG_API UClass* Z_Construct_UClass_UAttackWeapon();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UAttackWeaponBow::StaticRegisterNativesUAttackWeaponBow()
	{
	}
	UClass* Z_Construct_UClass_UAttackWeaponBow_NoRegister()
	{
		return UAttackWeaponBow::StaticClass();
	}
	struct Z_Construct_UClass_UAttackWeaponBow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackWeaponBow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttackWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackWeaponBow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Attack/Public/AttackWeaponBow.h" },
		{ "ModuleRelativePath", "Attack/Public/AttackWeaponBow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackWeaponBow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackWeaponBow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackWeaponBow_Statics::ClassParams = {
		&UAttackWeaponBow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttackWeaponBow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackWeaponBow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackWeaponBow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackWeaponBow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackWeaponBow, 1987477161);
	template<> ARPG_API UClass* StaticClass<UAttackWeaponBow>()
	{
		return UAttackWeaponBow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackWeaponBow(Z_Construct_UClass_UAttackWeaponBow, &UAttackWeaponBow::StaticClass, TEXT("/Script/ARPG"), TEXT("UAttackWeaponBow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackWeaponBow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
