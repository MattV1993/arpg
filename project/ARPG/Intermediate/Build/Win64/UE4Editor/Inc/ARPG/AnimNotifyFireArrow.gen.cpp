// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Notify/Public/AnimNotifyFireArrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyFireArrow() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAnimNotifyFireArrow_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAnimNotifyFireArrow();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UAnimNotifyFireArrow::StaticRegisterNativesUAnimNotifyFireArrow()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotifyFireArrow_NoRegister()
	{
		return UAnimNotifyFireArrow::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyFireArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyFireArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyFireArrow_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notify/Public/AnimNotifyFireArrow.h" },
		{ "ModuleRelativePath", "Notify/Public/AnimNotifyFireArrow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyFireArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyFireArrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyFireArrow_Statics::ClassParams = {
		&UAnimNotifyFireArrow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyFireArrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyFireArrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyFireArrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotifyFireArrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotifyFireArrow, 3861840934);
	template<> ARPG_API UClass* StaticClass<UAnimNotifyFireArrow>()
	{
		return UAnimNotifyFireArrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotifyFireArrow(Z_Construct_UClass_UAnimNotifyFireArrow, &UAnimNotifyFireArrow::StaticClass, TEXT("/Script/ARPG"), TEXT("UAnimNotifyFireArrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyFireArrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
