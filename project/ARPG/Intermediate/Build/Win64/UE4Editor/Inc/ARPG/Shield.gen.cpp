// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Shield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShield() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AShield_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AShield();
	ARPG_API UClass* Z_Construct_UClass_AEquipment();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void AShield::StaticRegisterNativesAShield()
	{
	}
	UClass* Z_Construct_UClass_AShield_NoRegister()
	{
		return AShield::StaticClass();
	}
	struct Z_Construct_UClass_AShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockHitMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockHitMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShield_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Shield.h" },
		{ "ModuleRelativePath", "Shield.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShield_Statics::NewProp_BlockMontage_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Shield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShield_Statics::NewProp_BlockMontage = { "BlockMontage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShield, BlockMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShield_Statics::NewProp_BlockMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Statics::NewProp_BlockMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShield_Statics::NewProp_BlockHitMontage_MetaData[] = {
		{ "Category", "Shield" },
		{ "ModuleRelativePath", "Shield.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShield_Statics::NewProp_BlockHitMontage = { "BlockHitMontage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShield, BlockHitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShield_Statics::NewProp_BlockHitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Statics::NewProp_BlockHitMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShield_Statics::NewProp_BlockMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShield_Statics::NewProp_BlockHitMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShield_Statics::ClassParams = {
		&AShield::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShield_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShield, 719435859);
	template<> ARPG_API UClass* StaticClass<AShield>()
	{
		return AShield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShield(Z_Construct_UClass_AShield, &AShield::StaticClass, TEXT("/Script/ARPG"), TEXT("AShield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
