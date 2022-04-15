// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CombatSystem/Public/CombatStateAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatStateAttack() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UCombatStateAttack_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatStateAttack();
	ARPG_API UClass* Z_Construct_UClass_UCombatState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UCombatSystemContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCombatStateAttack::execTryTransitionStopAttack)
	{
		P_GET_OBJECT(UClass,Z_Param_Type);
		P_GET_OBJECT(UCombatSystemContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryTransitionStopAttack(Z_Param_Type,Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatStateAttack::execTryTransitionNewAttack)
	{
		P_GET_OBJECT(UClass,Z_Param_Type);
		P_GET_OBJECT(UCombatSystemContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryTransitionNewAttack(Z_Param_Type,Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombatStateAttack::execAttackFinished)
	{
		P_GET_OBJECT(UCombatSystemContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackFinished(Z_Param_Context);
		P_NATIVE_END;
	}
	void UCombatStateAttack::StaticRegisterNativesUCombatStateAttack()
	{
		UClass* Class = UCombatStateAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackFinished", &UCombatStateAttack::execAttackFinished },
			{ "TryTransitionNewAttack", &UCombatStateAttack::execTryTransitionNewAttack },
			{ "TryTransitionStopAttack", &UCombatStateAttack::execTryTransitionStopAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics
	{
		struct CombatStateAttack_eventAttackFinished_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatStateAttack_eventAttackFinished_Parms, Context), Z_Construct_UClass_UCombatSystemContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatStateAttack, nullptr, "AttackFinished", nullptr, nullptr, sizeof(CombatStateAttack_eventAttackFinished_Parms), Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatStateAttack_AttackFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatStateAttack_AttackFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics
	{
		struct CombatStateAttack_eventTryTransitionNewAttack_Parms
		{
			UClass* Type;
			UCombatSystemContext* Context;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatStateAttack_eventTryTransitionNewAttack_Parms, Type), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatStateAttack_eventTryTransitionNewAttack_Parms, Context), Z_Construct_UClass_UCombatSystemContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CombatStateAttack_eventTryTransitionNewAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CombatStateAttack_eventTryTransitionNewAttack_Parms), &Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatStateAttack, nullptr, "TryTransitionNewAttack", nullptr, nullptr, sizeof(CombatStateAttack_eventTryTransitionNewAttack_Parms), Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics
	{
		struct CombatStateAttack_eventTryTransitionStopAttack_Parms
		{
			UClass* Type;
			UCombatSystemContext* Context;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatStateAttack_eventTryTransitionStopAttack_Parms, Type), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatStateAttack_eventTryTransitionStopAttack_Parms, Context), Z_Construct_UClass_UCombatSystemContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CombatStateAttack_eventTryTransitionStopAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CombatStateAttack_eventTryTransitionStopAttack_Parms), &Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatStateAttack, nullptr, "TryTransitionStopAttack", nullptr, nullptr, sizeof(CombatStateAttack_eventTryTransitionStopAttack_Parms), Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCombatStateAttack_NoRegister()
	{
		return UCombatStateAttack::StaticClass();
	}
	struct Z_Construct_UClass_UCombatStateAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatStateAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatStateAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatStateAttack_AttackFinished, "AttackFinished" }, // 4177390038
		{ &Z_Construct_UFunction_UCombatStateAttack_TryTransitionNewAttack, "TryTransitionNewAttack" }, // 2014046835
		{ &Z_Construct_UFunction_UCombatStateAttack_TryTransitionStopAttack, "TryTransitionStopAttack" }, // 1206765759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatStateAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatSystem/Public/CombatStateAttack.h" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatStateAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatStateAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatStateAttack_Statics::ClassParams = {
		&UCombatStateAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatStateAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatStateAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatStateAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatStateAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatStateAttack, 375062007);
	template<> ARPG_API UClass* StaticClass<UCombatStateAttack>()
	{
		return UCombatStateAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatStateAttack(Z_Construct_UClass_UCombatStateAttack, &UCombatStateAttack::StaticClass, TEXT("/Script/ARPG"), TEXT("UCombatStateAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatStateAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
