// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/DamageHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageHandler() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UDamageHandler_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UDamageHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UDamageHandler::StaticRegisterNativesUDamageHandler()
	{
	}
	UClass* Z_Construct_UClass_UDamageHandler_NoRegister()
	{
		return UDamageHandler::StaticClass();
	}
	struct Z_Construct_UClass_UDamageHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageHandler_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "DamageHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageHandler_Statics::ClassParams = {
		&UDamageHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDamageHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageHandler, 1616522646);
	template<> ARPG_API UClass* StaticClass<UDamageHandler>()
	{
		return UDamageHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageHandler(Z_Construct_UClass_UDamageHandler, &UDamageHandler::StaticClass, TEXT("/Script/ARPG"), TEXT("UDamageHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
