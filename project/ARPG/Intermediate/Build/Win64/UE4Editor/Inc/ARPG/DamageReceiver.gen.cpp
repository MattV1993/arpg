// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/DamageReceiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageReceiver() {}
// Cross Module References
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FDamageSpec();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UDamageReceiver_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UDamageReceiver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
class UScriptStruct* FDamageSpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARPG_API uint32 Get_Z_Construct_UScriptStruct_FDamageSpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageSpec, Z_Construct_UPackage__Script_ARPG(), TEXT("DamageSpec"), sizeof(FDamageSpec), Get_Z_Construct_UScriptStruct_FDamageSpec_Hash());
	}
	return Singleton;
}
template<> ARPG_API UScriptStruct* StaticStruct<FDamageSpec>()
{
	return FDamageSpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDamageSpec(FDamageSpec::StaticStruct, TEXT("/Script/ARPG"), TEXT("DamageSpec"), false, nullptr, nullptr);
static struct FScriptStruct_ARPG_StaticRegisterNativesFDamageSpec
{
	FScriptStruct_ARPG_StaticRegisterNativesFDamageSpec()
	{
		UScriptStruct::DeferCppStructOps<FDamageSpec>(FName(TEXT("DamageSpec")));
	}
} ScriptStruct_ARPG_StaticRegisterNativesFDamageSpec;
	struct Z_Construct_UScriptStruct_FDamageSpec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StunChance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DamageReceiver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageSpec>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "DamageSpec" },
		{ "ModuleRelativePath", "DamageReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDamageSpec, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_StunChance_MetaData[] = {
		{ "Category", "DamageSpec" },
		{ "ModuleRelativePath", "DamageReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_StunChance = { "StunChance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDamageSpec, StunChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_StunChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_StunChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageSpec_Statics::NewProp_StunChance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
		nullptr,
		&NewStructOps,
		"DamageSpec",
		sizeof(FDamageSpec),
		alignof(FDamageSpec),
		Z_Construct_UScriptStruct_FDamageSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDamageSpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDamageSpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DamageSpec"), sizeof(FDamageSpec), Get_Z_Construct_UScriptStruct_FDamageSpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDamageSpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDamageSpec_Hash() { return 2660289086U; }
	void UDamageReceiver::StaticRegisterNativesUDamageReceiver()
	{
	}
	UClass* Z_Construct_UClass_UDamageReceiver_NoRegister()
	{
		return UDamageReceiver::StaticClass();
	}
	struct Z_Construct_UClass_UDamageReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageReceiver_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "DamageReceiver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageReceiver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageReceiver_Statics::ClassParams = {
		&UDamageReceiver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDamageReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageReceiver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageReceiver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageReceiver, 29641815);
	template<> ARPG_API UClass* StaticClass<UDamageReceiver>()
	{
		return UDamageReceiver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageReceiver(Z_Construct_UClass_UDamageReceiver, &UDamageReceiver::StaticClass, TEXT("/Script/ARPG"), TEXT("UDamageReceiver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageReceiver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
