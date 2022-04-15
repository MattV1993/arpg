// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/DummyArrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyArrow() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_ADummyArrow_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_ADummyArrow();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ADummyArrow::StaticRegisterNativesADummyArrow()
	{
	}
	UClass* Z_Construct_UClass_ADummyArrow_NoRegister()
	{
		return ADummyArrow::StaticClass();
	}
	struct Z_Construct_UClass_ADummyArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feather_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Feather;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shaft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shaft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Head;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADummyArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyArrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DummyArrow.h" },
		{ "ModuleRelativePath", "DummyArrow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyArrow_Statics::NewProp_Feather_MetaData[] = {
		{ "Category", "DummyArrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DummyArrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADummyArrow_Statics::NewProp_Feather = { "Feather", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyArrow, Feather), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADummyArrow_Statics::NewProp_Feather_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADummyArrow_Statics::NewProp_Feather_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyArrow_Statics::NewProp_Shaft_MetaData[] = {
		{ "Category", "DummyArrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DummyArrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADummyArrow_Statics::NewProp_Shaft = { "Shaft", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyArrow, Shaft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADummyArrow_Statics::NewProp_Shaft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADummyArrow_Statics::NewProp_Shaft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyArrow_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "DummyArrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DummyArrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADummyArrow_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADummyArrow, Head), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADummyArrow_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADummyArrow_Statics::NewProp_Head_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADummyArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyArrow_Statics::NewProp_Feather,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyArrow_Statics::NewProp_Shaft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADummyArrow_Statics::NewProp_Head,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADummyArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADummyArrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADummyArrow_Statics::ClassParams = {
		&ADummyArrow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADummyArrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADummyArrow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADummyArrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADummyArrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADummyArrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADummyArrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADummyArrow, 3944119819);
	template<> ARPG_API UClass* StaticClass<ADummyArrow>()
	{
		return ADummyArrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADummyArrow(Z_Construct_UClass_ADummyArrow, &ADummyArrow::StaticClass, TEXT("/Script/ARPG"), TEXT("ADummyArrow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADummyArrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
