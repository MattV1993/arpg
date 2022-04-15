// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/ARPGCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPGCharacterBase() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AARPGCharacterBase_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AARPGCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ARPG_API UClass* Z_Construct_UClass_UTeam_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UCombatSystemContext_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_ULoadout_NoRegister();
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FStunAnims();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_ADummyArrow_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UHitReceiver_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UDamageReceiver_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UDamageSender_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AARPGCharacterBase::execEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execTryDodge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryDodge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execSwapWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapWeapons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execStopBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execStartBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execAttackReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execAttackPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execGetTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTeam**)Z_Param__Result=P_THIS->GetTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execGetCurrentStateString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentStateString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARPGCharacterBase::execTryJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryJump();
		P_NATIVE_END;
	}
	void AARPGCharacterBase::StaticRegisterNativesAARPGCharacterBase()
	{
		UClass* Class = AARPGCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackPressed", &AARPGCharacterBase::execAttackPressed },
			{ "AttackReleased", &AARPGCharacterBase::execAttackReleased },
			{ "BeginOverlap", &AARPGCharacterBase::execBeginOverlap },
			{ "EndOverlap", &AARPGCharacterBase::execEndOverlap },
			{ "GetCurrentStateString", &AARPGCharacterBase::execGetCurrentStateString },
			{ "GetTeam", &AARPGCharacterBase::execGetTeam },
			{ "StartBlock", &AARPGCharacterBase::execStartBlock },
			{ "StopBlock", &AARPGCharacterBase::execStopBlock },
			{ "SwapWeapons", &AARPGCharacterBase::execSwapWeapons },
			{ "TryDodge", &AARPGCharacterBase::execTryDodge },
			{ "TryJump", &AARPGCharacterBase::execTryJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_AttackPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_AttackPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_AttackPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "AttackPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_AttackPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_AttackPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_AttackPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_AttackPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_AttackReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_AttackReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_AttackReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "AttackReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_AttackReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_AttackReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_AttackReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_AttackReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics
	{
		struct ARPGCharacterBase_eventBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ARPGCharacterBase_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARPGCharacterBase_eventBeginOverlap_Parms), &Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(ARPGCharacterBase_eventBeginOverlap_Parms), Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics
	{
		struct ARPGCharacterBase_eventEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "EndOverlap", nullptr, nullptr, sizeof(ARPGCharacterBase_eventEndOverlap_Parms), Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics
	{
		struct ARPGCharacterBase_eventGetCurrentStateString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventGetCurrentStateString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "GetCurrentStateString", nullptr, nullptr, sizeof(ARPGCharacterBase_eventGetCurrentStateString_Parms), Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics
	{
		struct ARPGCharacterBase_eventGetTeam_Parms
		{
			UTeam* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase_eventGetTeam_Parms, ReturnValue), Z_Construct_UClass_UTeam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "GetTeam", nullptr, nullptr, sizeof(ARPGCharacterBase_eventGetTeam_Parms), Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_GetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_GetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_StartBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_StartBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_StartBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "StartBlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_StartBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_StartBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_StartBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_StartBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_StopBlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_StopBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_StopBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "StopBlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_StopBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_StopBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_StopBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_StopBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_SwapWeapons_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_SwapWeapons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_SwapWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "SwapWeapons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_SwapWeapons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_SwapWeapons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_SwapWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_SwapWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_TryDodge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_TryDodge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_TryDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "TryDodge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_TryDodge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_TryDodge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_TryDodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_TryDodge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARPGCharacterBase_TryJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPGCharacterBase_TryJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPGCharacterBase_TryJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPGCharacterBase, nullptr, "TryJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPGCharacterBase_TryJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPGCharacterBase_TryJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPGCharacterBase_TryJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARPGCharacterBase_TryJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARPGCharacterBase_NoRegister()
	{
		return AARPGCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AARPGCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loadout_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loadout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StunAnims_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StunAnims;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoomCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomCameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoomCameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDummyArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentDummyArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Team;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPGCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARPGCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARPGCharacterBase_AttackPressed, "AttackPressed" }, // 2701638570
		{ &Z_Construct_UFunction_AARPGCharacterBase_AttackReleased, "AttackReleased" }, // 2014335181
		{ &Z_Construct_UFunction_AARPGCharacterBase_BeginOverlap, "BeginOverlap" }, // 405855412
		{ &Z_Construct_UFunction_AARPGCharacterBase_EndOverlap, "EndOverlap" }, // 556668666
		{ &Z_Construct_UFunction_AARPGCharacterBase_GetCurrentStateString, "GetCurrentStateString" }, // 2067293960
		{ &Z_Construct_UFunction_AARPGCharacterBase_GetTeam, "GetTeam" }, // 2467127103
		{ &Z_Construct_UFunction_AARPGCharacterBase_StartBlock, "StartBlock" }, // 577057450
		{ &Z_Construct_UFunction_AARPGCharacterBase_StopBlock, "StopBlock" }, // 1658589960
		{ &Z_Construct_UFunction_AARPGCharacterBase_SwapWeapons, "SwapWeapons" }, // 2911229220
		{ &Z_Construct_UFunction_AARPGCharacterBase_TryDodge, "TryDodge" }, // 2956156904
		{ &Z_Construct_UFunction_AARPGCharacterBase_TryJump, "TryJump" }, // 4174350011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ARPGCharacterBase.h" },
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CombatSystem_MetaData[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CombatSystem = { "CombatSystem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, CombatSystem), Z_Construct_UClass_UCombatSystemContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CombatSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CombatSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Loadout_MetaData[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Loadout = { "Loadout", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, Loadout), Z_Construct_UClass_ULoadout_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Loadout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Loadout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_StunAnims_MetaData[] = {
		{ "Category", "ARPGCharacterBase" },
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_StunAnims = { "StunAnims", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, StunAnims), Z_Construct_UScriptStruct_FStunAnims, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_StunAnims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_StunAnims_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCamera = { "ZoomCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, ZoomCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCameraBoom = { "ZoomCameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, ZoomCameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CurrentDummyArrow_MetaData[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CurrentDummyArrow = { "CurrentDummyArrow", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, CurrentDummyArrow), Z_Construct_UClass_ADummyArrow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CurrentDummyArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CurrentDummyArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "ARPGCharacterBase" },
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, Health), METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Team_MetaData[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, Team), Z_Construct_UClass_UTeam_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Inventory_MetaData[] = {
		{ "ModuleRelativePath", "ARPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARPGCharacterBase, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARPGCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CombatSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Loadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_StunAnims,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_ZoomCameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_CurrentDummyArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPGCharacterBase_Statics::NewProp_Inventory,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AARPGCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHitReceiver_NoRegister, (int32)VTABLE_OFFSET(AARPGCharacterBase, IHitReceiver), false },
			{ Z_Construct_UClass_UDamageReceiver_NoRegister, (int32)VTABLE_OFFSET(AARPGCharacterBase, IDamageReceiver), false },
			{ Z_Construct_UClass_UDamageSender_NoRegister, (int32)VTABLE_OFFSET(AARPGCharacterBase, IDamageSender), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPGCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPGCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPGCharacterBase_Statics::ClassParams = {
		&AARPGCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARPGCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARPGCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARPGCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPGCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPGCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPGCharacterBase, 1285166929);
	template<> ARPG_API UClass* StaticClass<AARPGCharacterBase>()
	{
		return AARPGCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPGCharacterBase(Z_Construct_UClass_AARPGCharacterBase, &AARPGCharacterBase::StaticClass, TEXT("/Script/ARPG"), TEXT("AARPGCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPGCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
