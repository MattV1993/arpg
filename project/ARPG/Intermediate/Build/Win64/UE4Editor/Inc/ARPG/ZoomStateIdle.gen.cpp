// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CameraState/Public/ZoomStateIdle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoomStateIdle() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UZoomStateIdle_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UZoomStateIdle();
	ARPG_API UClass* Z_Construct_UClass_UZoomState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UZoomStateIdle::StaticRegisterNativesUZoomStateIdle()
	{
	}
	UClass* Z_Construct_UClass_UZoomStateIdle_NoRegister()
	{
		return UZoomStateIdle::StaticClass();
	}
	struct Z_Construct_UClass_UZoomStateIdle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoomStateIdle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZoomState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoomStateIdle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraState/Public/ZoomStateIdle.h" },
		{ "ModuleRelativePath", "CameraState/Public/ZoomStateIdle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoomStateIdle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoomStateIdle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZoomStateIdle_Statics::ClassParams = {
		&UZoomStateIdle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UZoomStateIdle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoomStateIdle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoomStateIdle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZoomStateIdle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZoomStateIdle, 873498535);
	template<> ARPG_API UClass* StaticClass<UZoomStateIdle>()
	{
		return UZoomStateIdle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZoomStateIdle(Z_Construct_UClass_UZoomStateIdle, &UZoomStateIdle::StaticClass, TEXT("/Script/ARPG"), TEXT("UZoomStateIdle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoomStateIdle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
