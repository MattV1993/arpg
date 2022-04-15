// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Attack/Public/AttackHolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackHolder() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAttackHolder_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAttackHolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UAttackHolder::StaticRegisterNativesUAttackHolder()
	{
	}
	UClass* Z_Construct_UClass_UAttackHolder_NoRegister()
	{
		return UAttackHolder::StaticClass();
	}
	struct Z_Construct_UClass_UAttackHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackHolder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Attack/Public/AttackHolder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAttackHolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackHolder_Statics::ClassParams = {
		&UAttackHolder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttackHolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackHolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackHolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackHolder, 3485841741);
	template<> ARPG_API UClass* StaticClass<UAttackHolder>()
	{
		return UAttackHolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackHolder(Z_Construct_UClass_UAttackHolder, &UAttackHolder::StaticClass, TEXT("/Script/ARPG"), TEXT("UAttackHolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackHolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
