// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Loadout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadout() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_ULoadout_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_ULoadout();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AShield_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AArmour_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAttackHolder_NoRegister();
// End Cross Module References
	void ULoadout::StaticRegisterNativesULoadout()
	{
	}
	UClass* Z_Construct_UClass_ULoadout_NoRegister()
	{
		return ULoadout::StaticClass();
	}
	struct Z_Construct_UClass_ULoadout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadArmour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadArmour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChestArmour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChestArmour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegArmour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LegArmour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveArmour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveArmour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BootArmour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BootArmour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Loadout.h" },
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::NewProp_Weapon_MetaData[] = {
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadout_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadout, Weapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::NewProp_SecondaryWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadout_Statics::NewProp_SecondaryWeapon = { "SecondaryWeapon", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadout, SecondaryWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::NewProp_SecondaryWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::NewProp_SecondaryWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::NewProp_Shield_MetaData[] = {
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadout_Statics::NewProp_Shield = { "Shield", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadout, Shield), Z_Construct_UClass_AShield_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::NewProp_Shield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::NewProp_Shield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::NewProp_HeadArmour_MetaData[] = {
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadout_Statics::NewProp_HeadArmour = { "HeadArmour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadout, HeadArmour), Z_Construct_UClass_AArmour_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::NewProp_HeadArmour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::NewProp_HeadArmour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::NewProp_ChestArmour_MetaData[] = {
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadout_Statics::NewProp_ChestArmour = { "ChestArmour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadout, ChestArmour), Z_Construct_UClass_AArmour_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::NewProp_ChestArmour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::NewProp_ChestArmour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::NewProp_LegArmour_MetaData[] = {
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadout_Statics::NewProp_LegArmour = { "LegArmour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadout, LegArmour), Z_Construct_UClass_AArmour_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::NewProp_LegArmour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::NewProp_LegArmour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::NewProp_GloveArmour_MetaData[] = {
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadout_Statics::NewProp_GloveArmour = { "GloveArmour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadout, GloveArmour), Z_Construct_UClass_AArmour_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::NewProp_GloveArmour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::NewProp_GloveArmour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::NewProp_BootArmour_MetaData[] = {
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadout_Statics::NewProp_BootArmour = { "BootArmour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadout, BootArmour), Z_Construct_UClass_AArmour_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::NewProp_BootArmour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::NewProp_BootArmour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadout_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Loadout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadout_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadout, Owner), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadout_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadout_Statics::NewProp_SecondaryWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadout_Statics::NewProp_Shield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadout_Statics::NewProp_HeadArmour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadout_Statics::NewProp_ChestArmour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadout_Statics::NewProp_LegArmour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadout_Statics::NewProp_GloveArmour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadout_Statics::NewProp_BootArmour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadout_Statics::NewProp_Owner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULoadout_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAttackHolder_NoRegister, (int32)VTABLE_OFFSET(ULoadout, IAttackHolder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadout>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadout_Statics::ClassParams = {
		&ULoadout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadout_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadout()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadout_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadout, 3688865734);
	template<> ARPG_API UClass* StaticClass<ULoadout>()
	{
		return ULoadout::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadout(Z_Construct_UClass_ULoadout, &ULoadout::StaticClass, TEXT("/Script/ARPG"), TEXT("ULoadout"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadout);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
