// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CameraState/Public/ZoomStateZoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoomStateZoom() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UZoomStateZoom_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UZoomStateZoom();
	ARPG_API UClass* Z_Construct_UClass_UZoomState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UZoomStateZoom::StaticRegisterNativesUZoomStateZoom()
	{
	}
	UClass* Z_Construct_UClass_UZoomStateZoom_NoRegister()
	{
		return UZoomStateZoom::StaticClass();
	}
	struct Z_Construct_UClass_UZoomStateZoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoomStateZoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZoomState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoomStateZoom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CameraState/Public/ZoomStateZoom.h" },
		{ "ModuleRelativePath", "CameraState/Public/ZoomStateZoom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoomStateZoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoomStateZoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZoomStateZoom_Statics::ClassParams = {
		&UZoomStateZoom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UZoomStateZoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoomStateZoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoomStateZoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZoomStateZoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZoomStateZoom, 2147337050);
	template<> ARPG_API UClass* StaticClass<UZoomStateZoom>()
	{
		return UZoomStateZoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZoomStateZoom(Z_Construct_UClass_UZoomStateZoom, &UZoomStateZoom::StaticClass, TEXT("/Script/ARPG"), TEXT("UZoomStateZoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoomStateZoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
