// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Animal/Public/AnimalController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimalController() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AAnimalController_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AAnimalController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void AAnimalController::StaticRegisterNativesAAnimalController()
	{
	}
	UClass* Z_Construct_UClass_AAnimalController_NoRegister()
	{
		return AAnimalController::StaticClass();
	}
	struct Z_Construct_UClass_AAnimalController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnimalController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimalController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Animal/Public/AnimalController.h" },
		{ "ModuleRelativePath", "Animal/Public/AnimalController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnimalController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimalController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnimalController_Statics::ClassParams = {
		&AAnimalController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAnimalController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimalController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnimalController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnimalController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnimalController, 3068504233);
	template<> ARPG_API UClass* StaticClass<AAnimalController>()
	{
		return AAnimalController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnimalController(Z_Construct_UClass_AAnimalController, &AAnimalController::StaticClass, TEXT("/Script/ARPG"), TEXT("AAnimalController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimalController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
