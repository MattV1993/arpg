// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/SpellInventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellInventory() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_USpellInventory_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_USpellInventory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void USpellInventory::StaticRegisterNativesUSpellInventory()
	{
	}
	UClass* Z_Construct_UClass_USpellInventory_NoRegister()
	{
		return USpellInventory::StaticClass();
	}
	struct Z_Construct_UClass_USpellInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpellInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpellInventory.h" },
		{ "ModuleRelativePath", "SpellInventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpellInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpellInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpellInventory_Statics::ClassParams = {
		&USpellInventory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpellInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpellInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpellInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpellInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpellInventory, 1984371402);
	template<> ARPG_API UClass* StaticClass<USpellInventory>()
	{
		return USpellInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpellInventory(Z_Construct_UClass_USpellInventory, &USpellInventory::StaticClass, TEXT("/Script/ARPG"), TEXT("USpellInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpellInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
