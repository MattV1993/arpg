// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/PickupItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupItem() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_APickupItem_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_APickupItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_AItem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickupItem::execDeSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupItem::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AItem**)Z_Param__Result=P_THIS->Spawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupItem::execDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupItem::execPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup();
		P_NATIVE_END;
	}
	void APickupItem::StaticRegisterNativesAPickupItem()
	{
		UClass* Class = APickupItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeSpawn", &APickupItem::execDeSpawn },
			{ "Drop", &APickupItem::execDrop },
			{ "Pickup", &APickupItem::execPickup },
			{ "Spawn", &APickupItem::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupItem_DeSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_DeSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_DeSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "DeSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_DeSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_DeSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_DeSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupItem_DeSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupItem_Drop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupItem_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupItem_Pickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "Pickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupItem_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupItem_Spawn_Statics
	{
		struct PickupItem_eventSpawn_Parms
		{
			AItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupItem_Spawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupItem_eventSpawn_Parms, ReturnValue), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupItem_Spawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupItem_Spawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupItem_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupItem_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupItem, nullptr, "Spawn", nullptr, nullptr, sizeof(PickupItem_eventSpawn_Parms), Z_Construct_UFunction_APickupItem_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_Spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupItem_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupItem_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupItem_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupItem_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupItem_NoRegister()
	{
		return APickupItem::StaticClass();
	}
	struct Z_Construct_UClass_APickupItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupItem_DeSpawn, "DeSpawn" }, // 918297446
		{ &Z_Construct_UFunction_APickupItem_Drop, "Drop" }, // 1307014078
		{ &Z_Construct_UFunction_APickupItem_Pickup, "Pickup" }, // 3121656224
		{ &Z_Construct_UFunction_APickupItem_Spawn, "Spawn" }, // 1880751466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupItem.h" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnClass_MetaData[] = {
		{ "Category", "PickupItem" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnClass = { "SpawnClass", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupItem, SpawnClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "PickupItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupItem, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnItem_MetaData[] = {
		{ "ModuleRelativePath", "PickupItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnItem = { "SpawnItem", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupItem, SpawnItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_Sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_SpawnItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupItem_Statics::ClassParams = {
		&APickupItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupItem, 265608016);
	template<> ARPG_API UClass* StaticClass<APickupItem>()
	{
		return APickupItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupItem(Z_Construct_UClass_APickupItem, &APickupItem::StaticClass, TEXT("/Script/ARPG"), TEXT("APickupItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
