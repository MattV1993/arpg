// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CombatSystem/Public/CombatSystemContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatSystemContext() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UCombatSystemContext_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatSystemContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UCombatState_NoRegister();
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FHitSpec();
// End Cross Module References
	void UCombatSystemContext::StaticRegisterNativesUCombatSystemContext()
	{
	}
	UClass* Z_Construct_UClass_UCombatSystemContext_NoRegister()
	{
		return UCombatSystemContext::StaticClass();
	}
	struct Z_Construct_UClass_UCombatSystemContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatSystemContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSystemContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatSystem/Public/CombatSystemContext.h" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatSystemContext.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "CombatSystem/Public/CombatSystemContext.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSystemContext, CurrentState), Z_Construct_UClass_UCombatState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_LastHit_MetaData[] = {
		{ "ModuleRelativePath", "CombatSystem/Public/CombatSystemContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_LastHit = { "LastHit", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCombatSystemContext, LastHit), Z_Construct_UScriptStruct_FHitSpec, METADATA_PARAMS(Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_LastHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_LastHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatSystemContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatSystemContext_Statics::NewProp_LastHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatSystemContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatSystemContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatSystemContext_Statics::ClassParams = {
		&UCombatSystemContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombatSystemContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSystemContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatSystemContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatSystemContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatSystemContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatSystemContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatSystemContext, 1831123667);
	template<> ARPG_API UClass* StaticClass<UCombatSystemContext>()
	{
		return UCombatSystemContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatSystemContext(Z_Construct_UClass_UCombatSystemContext, &UCombatSystemContext::StaticClass, TEXT("/Script/ARPG"), TEXT("UCombatSystemContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatSystemContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
