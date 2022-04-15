// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSpec();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FDamageSpec();
	ARPG_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AWeapon();
	ARPG_API UClass* Z_Construct_UClass_AEquipment();
	ARPG_API UClass* Z_Construct_UClass_UAttack_NoRegister();
// End Cross Module References
class UScriptStruct* FWeaponSpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARPG_API uint32 Get_Z_Construct_UScriptStruct_FWeaponSpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponSpec, Z_Construct_UPackage__Script_ARPG(), TEXT("WeaponSpec"), sizeof(FWeaponSpec), Get_Z_Construct_UScriptStruct_FWeaponSpec_Hash());
	}
	return Singleton;
}
template<> ARPG_API UScriptStruct* StaticStruct<FWeaponSpec>()
{
	return FWeaponSpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponSpec(FWeaponSpec::StaticStruct, TEXT("/Script/ARPG"), TEXT("WeaponSpec"), false, nullptr, nullptr);
static struct FScriptStruct_ARPG_StaticRegisterNativesFWeaponSpec
{
	FScriptStruct_ARPG_StaticRegisterNativesFWeaponSpec()
	{
		UScriptStruct::DeferCppStructOps<FWeaponSpec>(FName(TEXT("WeaponSpec")));
	}
} ScriptStruct_ARPG_StaticRegisterNativesFWeaponSpec;
	struct Z_Construct_UScriptStruct_FWeaponSpec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponSpec>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponSpec" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponSpec, Damage), Z_Construct_UScriptStruct_FDamageSpec, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "WeaponSpec" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeaponSpec, AttackSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_AttackSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponSpec_Statics::NewProp_AttackSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
		nullptr,
		&NewStructOps,
		"WeaponSpec",
		sizeof(FWeaponSpec),
		alignof(FWeaponSpec),
		Z_Construct_UScriptStruct_FWeaponSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponSpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponSpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponSpec"), sizeof(FWeaponSpec), Get_Z_Construct_UScriptStruct_FWeaponSpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeaponSpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponSpec_Hash() { return 342533977U; }
	void AWeapon::StaticRegisterNativesAWeapon()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StandardAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeavyAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeavyAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Spec_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Spec), Z_Construct_UScriptStruct_FWeaponSpec, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Spec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Spec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_StandardAttack_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_StandardAttack = { "StandardAttack", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, StandardAttack), Z_Construct_UClass_UAttack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_StandardAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_StandardAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_HeavyAttack_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_HeavyAttack = { "HeavyAttack", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, HeavyAttack), Z_Construct_UClass_UAttack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_HeavyAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_HeavyAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Spec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_StandardAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_HeavyAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon, 689084354);
	template<> ARPG_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon(Z_Construct_UClass_AWeapon, &AWeapon::StaticClass, TEXT("/Script/ARPG"), TEXT("AWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
