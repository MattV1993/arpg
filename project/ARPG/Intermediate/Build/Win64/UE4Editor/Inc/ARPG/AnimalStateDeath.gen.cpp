// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Animal/Public/AnimalStateDeath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimalStateDeath() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAnimalStateDeath_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAnimalStateDeath();
	ARPG_API UClass* Z_Construct_UClass_UAnimalState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UAnimalStateDeath::StaticRegisterNativesUAnimalStateDeath()
	{
	}
	UClass* Z_Construct_UClass_UAnimalStateDeath_NoRegister()
	{
		return UAnimalStateDeath::StaticClass();
	}
	struct Z_Construct_UClass_UAnimalStateDeath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimalStateDeath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimalState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalStateDeath_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Animal/Public/AnimalStateDeath.h" },
		{ "ModuleRelativePath", "Animal/Public/AnimalStateDeath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimalStateDeath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimalStateDeath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimalStateDeath_Statics::ClassParams = {
		&UAnimalStateDeath::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimalStateDeath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalStateDeath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimalStateDeath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimalStateDeath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimalStateDeath, 3160764202);
	template<> ARPG_API UClass* StaticClass<UAnimalStateDeath>()
	{
		return UAnimalStateDeath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimalStateDeath(Z_Construct_UClass_UAnimalStateDeath, &UAnimalStateDeath::StaticClass, TEXT("/Script/ARPG"), TEXT("UAnimalStateDeath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimalStateDeath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
