// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/AI/Public/ARPGAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPGAIController() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AARPGAIController_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AARPGAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void AARPGAIController::StaticRegisterNativesAARPGAIController()
	{
	}
	UClass* Z_Construct_UClass_AARPGAIController_NoRegister()
	{
		return AARPGAIController::StaticClass();
	}
	struct Z_Construct_UClass_AARPGAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPGAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/Public/ARPGAIController.h" },
		{ "ModuleRelativePath", "AI/Public/ARPGAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPGAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPGAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPGAIController_Statics::ClassParams = {
		&AARPGAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARPGAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPGAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPGAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPGAIController, 1078512925);
	template<> ARPG_API UClass* StaticClass<AARPGAIController>()
	{
		return AARPGAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPGAIController(Z_Construct_UClass_AARPGAIController, &AARPGAIController::StaticClass, TEXT("/Script/ARPG"), TEXT("AARPGAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPGAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
