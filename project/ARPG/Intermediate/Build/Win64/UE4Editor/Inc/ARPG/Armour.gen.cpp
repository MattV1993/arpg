// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Armour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmour() {}
// Cross Module References
	ARPG_API UEnum* Z_Construct_UEnum_ARPG_ArmourType();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FArmourSpec();
	ARPG_API UClass* Z_Construct_UClass_AArmour_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AArmour();
	ARPG_API UClass* Z_Construct_UClass_AEquipment();
// End Cross Module References
	static UEnum* ArmourType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ARPG_ArmourType, Z_Construct_UPackage__Script_ARPG(), TEXT("ArmourType"));
		}
		return Singleton;
	}
	template<> ARPG_API UEnum* StaticEnum<ArmourType>()
	{
		return ArmourType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ArmourType(ArmourType_StaticEnum, TEXT("/Script/ARPG"), TEXT("ArmourType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ARPG_ArmourType_Hash() { return 3282137878U; }
	UEnum* Z_Construct_UEnum_ARPG_ArmourType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ARPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ArmourType"), 0, Get_Z_Construct_UEnum_ARPG_ArmourType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Head", (int64)Head },
				{ "Chest", (int64)Chest },
				{ "Leg", (int64)Leg },
				{ "Glove", (int64)Glove },
				{ "Boot", (int64)Boot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boot.DisplayName", "Boot" },
				{ "Boot.Name", "Boot" },
				{ "Chest.DisplayName", "Chest" },
				{ "Chest.Name", "Chest" },
				{ "Glove.DisplayName", "Glove" },
				{ "Glove.Name", "Glove" },
				{ "Head.DisplayName", "Head" },
				{ "Head.Name", "Head" },
				{ "Leg.DisplayName", "Leg" },
				{ "Leg.Name", "Leg" },
				{ "ModuleRelativePath", "Armour.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ARPG,
				nullptr,
				"ArmourType",
				"ArmourType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FArmourSpec::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARPG_API uint32 Get_Z_Construct_UScriptStruct_FArmourSpec_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArmourSpec, Z_Construct_UPackage__Script_ARPG(), TEXT("ArmourSpec"), sizeof(FArmourSpec), Get_Z_Construct_UScriptStruct_FArmourSpec_Hash());
	}
	return Singleton;
}
template<> ARPG_API UScriptStruct* StaticStruct<FArmourSpec>()
{
	return FArmourSpec::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArmourSpec(FArmourSpec::StaticStruct, TEXT("/Script/ARPG"), TEXT("ArmourSpec"), false, nullptr, nullptr);
static struct FScriptStruct_ARPG_StaticRegisterNativesFArmourSpec
{
	FScriptStruct_ARPG_StaticRegisterNativesFArmourSpec()
	{
		UScriptStruct::DeferCppStructOps<FArmourSpec>(FName(TEXT("ArmourSpec")));
	}
} ScriptStruct_ARPG_StaticRegisterNativesFArmourSpec;
	struct Z_Construct_UScriptStruct_FArmourSpec_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Protection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmourSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Armour.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArmourSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArmourSpec>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Protection_MetaData[] = {
		{ "Category", "ArmourSpec" },
		{ "ModuleRelativePath", "Armour.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Protection = { "Protection", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArmourSpec, Protection), METADATA_PARAMS(Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Protection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Protection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ArmourSpec" },
		{ "ModuleRelativePath", "Armour.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArmourSpec, Type), Z_Construct_UEnum_ARPG_ArmourType, METADATA_PARAMS(Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArmourSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Protection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmourSpec_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArmourSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
		nullptr,
		&NewStructOps,
		"ArmourSpec",
		sizeof(FArmourSpec),
		alignof(FArmourSpec),
		Z_Construct_UScriptStruct_FArmourSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmourSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArmourSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmourSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArmourSpec()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArmourSpec_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArmourSpec"), sizeof(FArmourSpec), Get_Z_Construct_UScriptStruct_FArmourSpec_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArmourSpec_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArmourSpec_Hash() { return 533512392U; }
	void AArmour::StaticRegisterNativesAArmour()
	{
	}
	UClass* Z_Construct_UClass_AArmour_NoRegister()
	{
		return AArmour::StaticClass();
	}
	struct Z_Construct_UClass_AArmour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmour_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Armour.h" },
		{ "ModuleRelativePath", "Armour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmour_Statics::NewProp_Spec_MetaData[] = {
		{ "Category", "Armour" },
		{ "ModuleRelativePath", "Armour.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArmour_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmour, Spec), Z_Construct_UScriptStruct_FArmourSpec, METADATA_PARAMS(Z_Construct_UClass_AArmour_Statics::NewProp_Spec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArmour_Statics::NewProp_Spec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmour_Statics::NewProp_Spec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmour_Statics::ClassParams = {
		&AArmour::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArmour_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmour, 2758304313);
	template<> ARPG_API UClass* StaticClass<AArmour>()
	{
		return AArmour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmour(Z_Construct_UClass_AArmour, &AArmour::StaticClass, TEXT("/Script/ARPG"), TEXT("AArmour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
