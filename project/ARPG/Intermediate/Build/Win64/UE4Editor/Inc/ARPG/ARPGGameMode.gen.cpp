// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/ARPGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPGGameMode() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AARPGGameMode_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AARPGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void AARPGGameMode::StaticRegisterNativesAARPGGameMode()
	{
	}
	UClass* Z_Construct_UClass_AARPGGameMode_NoRegister()
	{
		return AARPGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AARPGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARPGGameMode.h" },
		{ "ModuleRelativePath", "ARPGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPGGameMode_Statics::ClassParams = {
		&AARPGGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AARPGGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPGGameMode, 480090872);
	template<> ARPG_API UClass* StaticClass<AARPGGameMode>()
	{
		return AARPGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPGGameMode(Z_Construct_UClass_AARPGGameMode, &AARPGGameMode::StaticClass, TEXT("/Script/ARPG"), TEXT("AARPGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
