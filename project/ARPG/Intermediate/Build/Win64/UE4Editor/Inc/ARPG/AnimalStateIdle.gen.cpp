// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Animal/Public/AnimalStateIdle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimalStateIdle() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAnimalStateIdle_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAnimalStateIdle();
	ARPG_API UClass* Z_Construct_UClass_UAnimalState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UAnimalStateIdle::StaticRegisterNativesUAnimalStateIdle()
	{
	}
	UClass* Z_Construct_UClass_UAnimalStateIdle_NoRegister()
	{
		return UAnimalStateIdle::StaticClass();
	}
	struct Z_Construct_UClass_UAnimalStateIdle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimalStateIdle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimalState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalStateIdle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Animal/Public/AnimalStateIdle.h" },
		{ "ModuleRelativePath", "Animal/Public/AnimalStateIdle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimalStateIdle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimalStateIdle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimalStateIdle_Statics::ClassParams = {
		&UAnimalStateIdle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimalStateIdle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalStateIdle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimalStateIdle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimalStateIdle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimalStateIdle, 2001378656);
	template<> ARPG_API UClass* StaticClass<UAnimalStateIdle>()
	{
		return UAnimalStateIdle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimalStateIdle(Z_Construct_UClass_UAnimalStateIdle, &UAnimalStateIdle::StaticClass, TEXT("/Script/ARPG"), TEXT("UAnimalStateIdle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimalStateIdle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
