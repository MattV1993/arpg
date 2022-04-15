// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/SpellItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellItem() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_USpellItem_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_USpellItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UAttack_NoRegister();
// End Cross Module References
	void USpellItem::StaticRegisterNativesUSpellItem()
	{
	}
	UClass* Z_Construct_UClass_USpellItem_NoRegister()
	{
		return USpellItem::StaticClass();
	}
	struct Z_Construct_UClass_USpellItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpellItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpellItem.h" },
		{ "ModuleRelativePath", "SpellItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellItem_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "SpellItem" },
		{ "ModuleRelativePath", "SpellItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpellItem_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpellItem, Attack), Z_Construct_UClass_UAttack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpellItem_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpellItem_Statics::NewProp_Attack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpellItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpellItem_Statics::NewProp_Attack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpellItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpellItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpellItem_Statics::ClassParams = {
		&USpellItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpellItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpellItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpellItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpellItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpellItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpellItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpellItem, 851281055);
	template<> ARPG_API UClass* StaticClass<USpellItem>()
	{
		return USpellItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpellItem(Z_Construct_UClass_USpellItem, &USpellItem::StaticClass, TEXT("/Script/ARPG"), TEXT("USpellItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpellItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
