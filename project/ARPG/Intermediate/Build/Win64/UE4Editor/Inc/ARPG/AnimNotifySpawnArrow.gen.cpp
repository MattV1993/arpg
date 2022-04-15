// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Notify/Public/AnimNotifySpawnArrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifySpawnArrow() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAnimNotifySpawnArrow_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAnimNotifySpawnArrow();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UAnimNotifySpawnArrow::StaticRegisterNativesUAnimNotifySpawnArrow()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifySpawnArrow_NoRegister()
	{
		return UAnimNotifySpawnArrow::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifySpawnArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifySpawnArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifySpawnArrow_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notify/Public/AnimNotifySpawnArrow.h" },
		{ "ModuleRelativePath", "Notify/Public/AnimNotifySpawnArrow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifySpawnArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifySpawnArrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifySpawnArrow_Statics::ClassParams = {
		&UAnimNotifySpawnArrow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifySpawnArrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifySpawnArrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifySpawnArrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifySpawnArrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifySpawnArrow, 473567255);
	template<> ARPG_API UClass* StaticClass<UAnimNotifySpawnArrow>()
	{
		return UAnimNotifySpawnArrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifySpawnArrow(Z_Construct_UClass_UAnimNotifySpawnArrow, &UAnimNotifySpawnArrow::StaticClass, TEXT("/Script/ARPG"), TEXT("UAnimNotifySpawnArrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifySpawnArrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
