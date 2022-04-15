// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CombatSystem/Public/CombatStateDodge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatStateDodge() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UCombatStateDodge_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatStateDodge();
	ARPG_API UClass* Z_Construct_UClass_UCombatState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UCombatSystemContext_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCombatStateDodge::execEndDelayFinished)
	{
		P_GET_OBJECT(UCombatSystemContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndDelayFinished(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatStateDodge::execDodgeFinished)
	{
		P_GET_OBJECT(UCombatSystemContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DodgeFinished(Z_Param_Context);
		P_NATIVE_END;
	}
	void UCombatStateDodge::StaticRegisterNativesUCombatStateDodge()
	{
		UClass* Class = UCombatStateDodge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DodgeFinished", &UCombatStateDodge::execDodgeFinished },
			{ "EndDelayFinished", &UCombatStateDodge::execEndDelayFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics
	{
		struct CombatStateDodge_eventDodgeFinished_Parms
		{
			UCombatSystemContext* Context;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatStateDodge_eventDodgeFinished_Parms, Context), Z_Construct_UClass_UCombatSystemContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateDodge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatStateDodge, nullptr, "DodgeFinished", nullptr, nullptr, sizeof(CombatStateDodge_eventDodgeFinished_Parms), Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatStateDodge_DodgeFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatStateDodge_DodgeFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics
	{
		struct CombatStateDodge_eventEndDelayFinished_Parms
		{
			UCombatSystemContext* Context;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatStateDodge_eventEndDelayFinished_Parms, Context), Z_Construct_UClass_UCombatSystemContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateDodge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatStateDodge, nullptr, "EndDelayFinished", nullptr, nullptr, sizeof(CombatStateDodge_eventEndDelayFinished_Parms), Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCombatStateDodge_NoRegister()
	{
		return UCombatStateDodge::StaticClass();
	}
	struct Z_Construct_UClass_UCombatStateDodge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatStateDodge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatStateDodge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatStateDodge_DodgeFinished, "DodgeFinished" }, // 1347447413
		{ &Z_Construct_UFunction_UCombatStateDodge_EndDelayFinished, "EndDelayFinished" }, // 3294962011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatStateDodge_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CombatSystem/Public/CombatStateDodge.h" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateDodge.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatStateDodge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatStateDodge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatStateDodge_Statics::ClassParams = {
		&UCombatStateDodge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCombatStateDodge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatStateDodge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatStateDodge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatStateDodge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatStateDodge, 546757346);
	template<> ARPG_API UClass* StaticClass<UCombatStateDodge>()
	{
		return UCombatStateDodge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatStateDodge(Z_Construct_UClass_UCombatStateDodge, &UCombatStateDodge::StaticClass, TEXT("/Script/ARPG"), TEXT("UCombatStateDodge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatStateDodge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
