// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Team.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeam() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UTeam_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UTeam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	DEFINE_FUNCTION(UTeam::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTeam::execSetName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetName(Z_Param_Name);
		P_NATIVE_END;
	}
	void UTeam::StaticRegisterNativesUTeam()
	{
		UClass* Class = UTeam::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetName", &UTeam::execGetName },
			{ "SetName", &UTeam::execSetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTeam_GetName_Statics
	{
		struct Team_eventGetName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTeam_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Team_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTeam_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeam_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTeam_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeam_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeam, nullptr, "GetName", nullptr, nullptr, sizeof(Team_eventGetName_Parms), Z_Construct_UFunction_UTeam_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeam_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTeam_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeam_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTeam_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTeam_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTeam_SetName_Statics
	{
		struct Team_eventSetName_Parms
		{
			FName Name;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTeam_SetName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Team_eventSetName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTeam_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeam_SetName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTeam_SetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Team.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeam_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeam, nullptr, "SetName", nullptr, nullptr, sizeof(Team_eventSetName_Parms), Z_Construct_UFunction_UTeam_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeam_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTeam_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeam_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTeam_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTeam_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTeam_NoRegister()
	{
		return UTeam::StaticClass();
	}
	struct Z_Construct_UClass_UTeam_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TeamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTeam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTeam_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTeam_GetName, "GetName" }, // 2281662063
		{ &Z_Construct_UFunction_UTeam_SetName, "SetName" }, // 2601556339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeam_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Team.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Team.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeam_Statics::NewProp_TeamName_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "Team.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTeam_Statics::NewProp_TeamName = { "TeamName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeam, TeamName), METADATA_PARAMS(Z_Construct_UClass_UTeam_Statics::NewProp_TeamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeam_Statics::NewProp_TeamName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeam_Statics::NewProp_TeamName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTeam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTeam_Statics::ClassParams = {
		&UTeam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTeam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTeam_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTeam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTeam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTeam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTeam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTeam, 3086107969);
	template<> ARPG_API UClass* StaticClass<UTeam>()
	{
		return UTeam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTeam(Z_Construct_UClass_UTeam, &UTeam::StaticClass, TEXT("/Script/ARPG"), TEXT("UTeam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTeam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
