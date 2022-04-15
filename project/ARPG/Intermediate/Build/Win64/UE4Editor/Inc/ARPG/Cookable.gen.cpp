// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Cookable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookable() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UCookable_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCookable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UCookable::StaticRegisterNativesUCookable()
	{
	}
	UClass* Z_Construct_UClass_UCookable_NoRegister()
	{
		return UCookable::StaticClass();
	}
	struct Z_Construct_UClass_UCookable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cookable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICookable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCookable_Statics::ClassParams = {
		&UCookable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCookable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCookable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCookable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCookable, 2711254601);
	template<> ARPG_API UClass* StaticClass<UCookable>()
	{
		return UCookable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCookable(Z_Construct_UClass_UCookable, &UCookable::StaticClass, TEXT("/Script/ARPG"), TEXT("UCookable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
