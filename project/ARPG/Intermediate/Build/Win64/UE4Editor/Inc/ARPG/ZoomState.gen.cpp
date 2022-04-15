// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CameraState/Public/ZoomState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoomState() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UZoomState_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UZoomState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UZoomState::StaticRegisterNativesUZoomState()
	{
	}
	UClass* Z_Construct_UClass_UZoomState_NoRegister()
	{
		return UZoomState::StaticClass();
	}
	struct Z_Construct_UClass_UZoomState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoomState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoomState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraState/Public/ZoomState.h" },
		{ "ModuleRelativePath", "CameraState/Public/ZoomState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoomState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoomState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZoomState_Statics::ClassParams = {
		&UZoomState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UZoomState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoomState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoomState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZoomState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZoomState, 1111778405);
	template<> ARPG_API UClass* StaticClass<UZoomState>()
	{
		return UZoomState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZoomState(Z_Construct_UClass_UZoomState, &UZoomState::StaticClass, TEXT("/Script/ARPG"), TEXT("UZoomState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoomState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
