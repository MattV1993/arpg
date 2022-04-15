// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CameraState/Public/ZoomStateContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoomStateContext() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UZoomStateContext_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UZoomStateContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UZoomState_NoRegister();
// End Cross Module References
	void UZoomStateContext::StaticRegisterNativesUZoomStateContext()
	{
	}
	UClass* Z_Construct_UClass_UZoomStateContext_NoRegister()
	{
		return UZoomStateContext::StaticClass();
	}
	struct Z_Construct_UClass_UZoomStateContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoomStateContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoomStateContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraState/Public/ZoomStateContext.h" },
		{ "ModuleRelativePath", "CameraState/Public/ZoomStateContext.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoomStateContext_Statics::NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "CameraState/Public/ZoomStateContext.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZoomStateContext_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZoomStateContext, CurrentState), Z_Construct_UClass_UZoomState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoomStateContext_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoomStateContext_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoomStateContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoomStateContext_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoomStateContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoomStateContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZoomStateContext_Statics::ClassParams = {
		&UZoomStateContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoomStateContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoomStateContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZoomStateContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoomStateContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoomStateContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZoomStateContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZoomStateContext, 2229111010);
	template<> ARPG_API UClass* StaticClass<UZoomStateContext>()
	{
		return UZoomStateContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZoomStateContext(Z_Construct_UClass_UZoomStateContext, &UZoomStateContext::StaticClass, TEXT("/Script/ARPG"), TEXT("UZoomStateContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoomStateContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
