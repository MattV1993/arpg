// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Attack/Public/AttackWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackWeapon() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAttackWeapon_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAttackWeapon();
	ARPG_API UClass* Z_Construct_UClass_UAttack();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UAttackWeapon::StaticRegisterNativesUAttackWeapon()
	{
	}
	UClass* Z_Construct_UClass_UAttackWeapon_NoRegister()
	{
		return UAttackWeapon::StaticClass();
	}
	struct Z_Construct_UClass_UAttackWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponAnims_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAnims_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponAnims;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Attack/Public/AttackWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Attack/Public/AttackWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackWeapon_Statics::NewProp_WeaponAnims_Inner = { "WeaponAnims", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackWeapon_Statics::NewProp_WeaponAnims_MetaData[] = {
		{ "ModuleRelativePath", "Attack/Public/AttackWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttackWeapon_Statics::NewProp_WeaponAnims = { "WeaponAnims", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttackWeapon, WeaponAnims), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttackWeapon_Statics::NewProp_WeaponAnims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackWeapon_Statics::NewProp_WeaponAnims_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackWeapon_Statics::NewProp_WeaponAnims_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackWeapon_Statics::NewProp_WeaponAnims,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackWeapon_Statics::ClassParams = {
		&UAttackWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttackWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttackWeapon_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackWeapon, 1504377493);
	template<> ARPG_API UClass* StaticClass<UAttackWeapon>()
	{
		return UAttackWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackWeapon(Z_Construct_UClass_UAttackWeapon, &UAttackWeapon::StaticClass, TEXT("/Script/ARPG"), TEXT("UAttackWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
