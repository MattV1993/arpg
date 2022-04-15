// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/WeaponSword.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSword() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AWeaponSword_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AWeaponSword();
	ARPG_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void AWeaponSword::StaticRegisterNativesAWeaponSword()
	{
	}
	UClass* Z_Construct_UClass_AWeaponSword_NoRegister()
	{
		return AWeaponSword::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponSword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponSword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponSword_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponSword.h" },
		{ "ModuleRelativePath", "WeaponSword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponSword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponSword>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponSword_Statics::ClassParams = {
		&AWeaponSword::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeaponSword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponSword()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponSword_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponSword, 3241683875);
	template<> ARPG_API UClass* StaticClass<AWeaponSword>()
	{
		return AWeaponSword::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponSword(Z_Construct_UClass_AWeaponSword, &AWeaponSword::StaticClass, TEXT("/Script/ARPG"), TEXT("AWeaponSword"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponSword);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
