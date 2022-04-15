// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Notify/Public/HitNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitNotifyState() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UHitNotifyState_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UHitNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UHitNotifyState::StaticRegisterNativesUHitNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UHitNotifyState_NoRegister()
	{
		return UHitNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UHitNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notify/Public/HitNotifyState.h" },
		{ "ModuleRelativePath", "Notify/Public/HitNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHitNotifyState_Statics::ClassParams = {
		&UHitNotifyState::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHitNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHitNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHitNotifyState, 944798417);
	template<> ARPG_API UClass* StaticClass<UHitNotifyState>()
	{
		return UHitNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHitNotifyState(Z_Construct_UClass_UHitNotifyState, &UHitNotifyState::StaticClass, TEXT("/Script/ARPG"), TEXT("UHitNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
