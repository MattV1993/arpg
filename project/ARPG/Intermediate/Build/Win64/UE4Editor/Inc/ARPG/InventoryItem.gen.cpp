// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/InventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItem() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UInventoryItem_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UInventoryItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UInventoryItem::StaticRegisterNativesUInventoryItem()
	{
	}
	UClass* Z_Construct_UClass_UInventoryItem_NoRegister()
	{
		return UInventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryItem.h" },
		{ "ModuleRelativePath", "InventoryItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::NewProp_SpawnClass_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "InventoryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryItem_Statics::NewProp_SpawnClass = { "SpawnClass", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItem, SpawnClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::NewProp_SpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::NewProp_SpawnClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItem_Statics::NewProp_SpawnClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItem_Statics::ClassParams = {
		&UInventoryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInventoryItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryItem, 3007702101);
	template<> ARPG_API UClass* StaticClass<UInventoryItem>()
	{
		return UInventoryItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryItem(Z_Construct_UClass_UInventoryItem, &UInventoryItem::StaticClass, TEXT("/Script/ARPG"), TEXT("UInventoryItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
