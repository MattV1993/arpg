// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CombatSystem/Public/CombatStateBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatStateBlock() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UCombatStateBlock_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatStateBlock();
	ARPG_API UClass* Z_Construct_UClass_UCombatState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UCombatSystemContext_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCombatStateBlock::execBlockHitFinished)
	{
		P_GET_OBJECT(UCombatSystemContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlockHitFinished(Z_Param_Context);
		P_NATIVE_END;
	}
	void UCombatStateBlock::StaticRegisterNativesUCombatStateBlock()
	{
		UClass* Class = UCombatStateBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockHitFinished", &UCombatStateBlock::execBlockHitFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics
	{
		struct CombatStateBlock_eventBlockHitFinished_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatStateBlock_eventBlockHitFinished_Parms, Context), Z_Construct_UClass_UCombatSystemContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatStateBlock, nullptr, "BlockHitFinished", nullptr, nullptr, sizeof(CombatStateBlock_eventBlockHitFinished_Parms), Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCombatStateBlock_NoRegister()
	{
		return UCombatStateBlock::StaticClass();
	}
	struct Z_Construct_UClass_UCombatStateBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatStateBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatStateBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatStateBlock_BlockHitFinished, "BlockHitFinished" }, // 2539390494
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatStateBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatSystem/Public/CombatStateBlock.h" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateBlock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatStateBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatStateBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatStateBlock_Statics::ClassParams = {
		&UCombatStateBlock::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatStateBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatStateBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatStateBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatStateBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatStateBlock, 1442590281);
	template<> ARPG_API UClass* StaticClass<UCombatStateBlock>()
	{
		return UCombatStateBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatStateBlock(Z_Construct_UClass_UCombatStateBlock, &UCombatStateBlock::StaticClass, TEXT("/Script/ARPG"), TEXT("UCombatStateBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatStateBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
