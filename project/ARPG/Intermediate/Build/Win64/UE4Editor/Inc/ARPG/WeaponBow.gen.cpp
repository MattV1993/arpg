// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/WeaponBow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBow() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AWeaponBow_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AWeaponBow();
	ARPG_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void AWeaponBow::StaticRegisterNativesAWeaponBow()
	{
	}
	UClass* Z_Construct_UClass_AWeaponBow_NoRegister()
	{
		return AWeaponBow::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponBow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponBow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponBow.h" },
		{ "ModuleRelativePath", "WeaponBow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponBow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBow_Statics::ClassParams = {
		&AWeaponBow::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AWeaponBow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponBow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponBow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponBow, 3992482350);
	template<> ARPG_API UClass* StaticClass<AWeaponBow>()
	{
		return AWeaponBow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponBow(Z_Construct_UClass_AWeaponBow, &AWeaponBow::StaticClass, TEXT("/Script/ARPG"), TEXT("AWeaponBow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
