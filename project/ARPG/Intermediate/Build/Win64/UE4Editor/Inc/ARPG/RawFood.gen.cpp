// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/RawFood.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawFood() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_ARawFood_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_ARawFood();
	ARPG_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UCookable_NoRegister();
// End Cross Module References
	void ARawFood::StaticRegisterNativesARawFood()
	{
	}
	UClass* Z_Construct_UClass_ARawFood_NoRegister()
	{
		return ARawFood::StaticClass();
	}
	struct Z_Construct_UClass_ARawFood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARawFood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARawFood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RawFood.h" },
		{ "ModuleRelativePath", "RawFood.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARawFood_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCookable_NoRegister, (int32)VTABLE_OFFSET(ARawFood, ICookable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARawFood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARawFood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARawFood_Statics::ClassParams = {
		&ARawFood::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARawFood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARawFood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARawFood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARawFood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARawFood, 2881195676);
	template<> ARPG_API UClass* StaticClass<ARawFood>()
	{
		return ARawFood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARawFood(Z_Construct_UClass_ARawFood, &ARawFood::StaticClass, TEXT("/Script/ARPG"), TEXT("ARawFood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARawFood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
