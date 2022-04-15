// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/CombatSystem/Public/CombatStateStun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatStateStun() {}
// Cross Module References
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FStunAnims();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatStateStun_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatStateStun();
	ARPG_API UClass* Z_Construct_UClass_UCombatState();
	ARPG_API UClass* Z_Construct_UClass_UCombatSystemContext_NoRegister();
// End Cross Module References
class UScriptStruct* FStunAnims::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARPG_API uint32 Get_Z_Construct_UScriptStruct_FStunAnims_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStunAnims, Z_Construct_UPackage__Script_ARPG(), TEXT("StunAnims"), sizeof(FStunAnims), Get_Z_Construct_UScriptStruct_FStunAnims_Hash());
	}
	return Singleton;
}
template<> ARPG_API UScriptStruct* StaticStruct<FStunAnims>()
{
	return FStunAnims::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStunAnims(FStunAnims::StaticStruct, TEXT("/Script/ARPG"), TEXT("StunAnims"), false, nullptr, nullptr);
static struct FScriptStruct_ARPG_StaticRegisterNativesFStunAnims
{
	FScriptStruct_ARPG_StaticRegisterNativesFStunAnims()
	{
		UScriptStruct::DeferCppStructOps<FStunAnims>(FName(TEXT("StunAnims")));
	}
} ScriptStruct_ARPG_StaticRegisterNativesFStunAnims;
	struct Z_Construct_UScriptStruct_FStunAnims_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunMontageF_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StunMontageF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunMontageB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StunMontageB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunMontageL_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StunMontageL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunMontageR_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StunMontageR;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunAnims_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateStun.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStunAnims_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStunAnims>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageF_MetaData[] = {
		{ "Category", "StunAnims" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateStun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageF = { "StunMontageF", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStunAnims, StunMontageF), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageB_MetaData[] = {
		{ "Category", "StunAnims" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateStun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageB = { "StunMontageB", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStunAnims, StunMontageB), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageL_MetaData[] = {
		{ "Category", "StunAnims" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateStun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageL = { "StunMontageL", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStunAnims, StunMontageL), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageR_MetaData[] = {
		{ "Category", "StunAnims" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateStun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageR = { "StunMontageR", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStunAnims, StunMontageR), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageR_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStunAnims_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStunAnims_Statics::NewProp_StunMontageR,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStunAnims_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
		nullptr,
		&NewStructOps,
		"StunAnims",
		sizeof(FStunAnims),
		alignof(FStunAnims),
		Z_Construct_UScriptStruct_FStunAnims_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunAnims_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStunAnims_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunAnims_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStunAnims()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStunAnims_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StunAnims"), sizeof(FStunAnims), Get_Z_Construct_UScriptStruct_FStunAnims_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStunAnims_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStunAnims_Hash() { return 1084244330U; }
	DEFINE_FUNCTION(UCombatStateStun::execStunFinished)
	{
		P_GET_OBJECT(UCombatSystemContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StunFinished(Z_Param_Context);
		P_NATIVE_END;
	}
	void UCombatStateStun::StaticRegisterNativesUCombatStateStun()
	{
		UClass* Class = UCombatStateStun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StunFinished", &UCombatStateStun::execStunFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics
	{
		struct CombatStateStun_eventStunFinished_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombatStateStun_eventStunFinished_Parms, Context), Z_Construct_UClass_UCombatSystemContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateStun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatStateStun, nullptr, "StunFinished", nullptr, nullptr, sizeof(CombatStateStun_eventStunFinished_Parms), Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombatStateStun_StunFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombatStateStun_StunFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCombatStateStun_NoRegister()
	{
		return UCombatStateStun::StaticClass();
	}
	struct Z_Construct_UClass_UCombatStateStun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombatStateStun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombatState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombatStateStun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatStateStun_StunFinished, "StunFinished" }, // 1432414187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombatStateStun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombatSystem/Public/CombatStateStun.h" },
		{ "ModuleRelativePath", "CombatSystem/Public/CombatStateStun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombatStateStun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatStateStun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombatStateStun_Statics::ClassParams = {
		&UCombatStateStun::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombatStateStun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombatStateStun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombatStateStun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombatStateStun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombatStateStun, 3176906109);
	template<> ARPG_API UClass* StaticClass<UCombatStateStun>()
	{
		return UCombatStateStun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombatStateStun(Z_Construct_UClass_UCombatStateStun, &UCombatStateStun::StaticClass, TEXT("/Script/ARPG"), TEXT("UCombatStateStun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatStateStun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
