// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Notify/Public/AnimNotifyAttackMontage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyAttackMontage() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAnimNotifyAttackMontage_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAnimNotifyAttackMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UAnimNotifyAttackMontage::StaticRegisterNativesUAnimNotifyAttackMontage()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifyAttackMontage_NoRegister()
	{
		return UAnimNotifyAttackMontage::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyAttackMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyAttackMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyAttackMontage_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notify/Public/AnimNotifyAttackMontage.h" },
		{ "ModuleRelativePath", "Notify/Public/AnimNotifyAttackMontage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyAttackMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyAttackMontage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyAttackMontage_Statics::ClassParams = {
		&UAnimNotifyAttackMontage::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyAttackMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyAttackMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyAttackMontage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyAttackMontage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyAttackMontage, 3408097694);
	template<> ARPG_API UClass* StaticClass<UAnimNotifyAttackMontage>()
	{
		return UAnimNotifyAttackMontage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyAttackMontage(Z_Construct_UClass_UAnimNotifyAttackMontage, &UAnimNotifyAttackMontage::StaticClass, TEXT("/Script/ARPG"), TEXT("UAnimNotifyAttackMontage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyAttackMontage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
