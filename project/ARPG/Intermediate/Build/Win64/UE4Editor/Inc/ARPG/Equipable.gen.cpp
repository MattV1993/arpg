// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Equipable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipable() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UEquipable_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UEquipable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UEquipable::StaticRegisterNativesUEquipable()
	{
	}
	UClass* Z_Construct_UClass_UEquipable_NoRegister()
	{
		return UEquipable::StaticClass();
	}
	struct Z_Construct_UClass_UEquipable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipable_Statics::ClassParams = {
		&UEquipable::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipable, 4239048019);
	template<> ARPG_API UClass* StaticClass<UEquipable>()
	{
		return UEquipable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipable(Z_Construct_UClass_UEquipable, &UEquipable::StaticClass, TEXT("/Script/ARPG"), TEXT("UEquipable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
