// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/HitReceiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitReceiver() {}
// Cross Module References
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FHitSpec();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponSpec();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UHitReceiver_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UHitReceiver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
class UScriptStruct* FHitSpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARPG_API uint32 Get_Z_Construct_UScriptStruct_FHitSpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitSpec, Z_Construct_UPackage__Script_ARPG(), TEXT("HitSpec"), sizeof(FHitSpec), Get_Z_Construct_UScriptStruct_FHitSpec_Hash());
	}
	return Singleton;
}
template<> ARPG_API UScriptStruct* StaticStruct<FHitSpec>()
{
	return FHitSpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitSpec(FHitSpec::StaticStruct, TEXT("/Script/ARPG"), TEXT("HitSpec"), false, nullptr, nullptr);
static struct FScriptStruct_ARPG_StaticRegisterNativesFHitSpec
{
	FScriptStruct_ARPG_StaticRegisterNativesFHitSpec()
	{
		UScriptStruct::DeferCppStructOps<FHitSpec>(FName(TEXT("HitSpec")));
	}
} ScriptStruct_ARPG_StaticRegisterNativesFHitSpec;
	struct Z_Construct_UScriptStruct_FHitSpec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSpec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HitReceiver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitSpec>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_WeaponSpec_MetaData[] = {
		{ "ModuleRelativePath", "HitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_WeaponSpec = { "WeaponSpec", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitSpec, WeaponSpec), Z_Construct_UScriptStruct_FWeaponSpec, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_WeaponSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_WeaponSpec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "HitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitSpec, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "HitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitSpec, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Sender_MetaData[] = {
		{ "ModuleRelativePath", "HitReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitSpec, Sender), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Sender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Sender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_WeaponSpec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitSpec_Statics::NewProp_Sender,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
		nullptr,
		&NewStructOps,
		"HitSpec",
		sizeof(FHitSpec),
		alignof(FHitSpec),
		Z_Construct_UScriptStruct_FHitSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitSpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitSpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitSpec"), sizeof(FHitSpec), Get_Z_Construct_UScriptStruct_FHitSpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitSpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitSpec_Hash() { return 1604528440U; }
	void UHitReceiver::StaticRegisterNativesUHitReceiver()
	{
	}
	UClass* Z_Construct_UClass_UHitReceiver_NoRegister()
	{
		return UHitReceiver::StaticClass();
	}
	struct Z_Construct_UClass_UHitReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitReceiver_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "HitReceiver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHitReceiver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHitReceiver_Statics::ClassParams = {
		&UHitReceiver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHitReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitReceiver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHitReceiver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHitReceiver, 1311357042);
	template<> ARPG_API UClass* StaticClass<UHitReceiver>()
	{
		return UHitReceiver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHitReceiver(Z_Construct_UClass_UHitReceiver, &UHitReceiver::StaticClass, TEXT("/Script/ARPG"), TEXT("UHitReceiver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitReceiver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
