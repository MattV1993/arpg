// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AItem;
#ifdef ARPG_PickupItem_generated_h
#error "PickupItem.generated.h already included, missing '#pragma once' in PickupItem.h"
#endif
#define ARPG_PickupItem_generated_h

#define ARPG_Source_ARPG_PickupItem_h_14_SPARSE_DATA
#define ARPG_Source_ARPG_PickupItem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeSpawn); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup);


#define ARPG_Source_ARPG_PickupItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeSpawn); \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup);


#define ARPG_Source_ARPG_PickupItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupItem(); \
	friend struct Z_Construct_UClass_APickupItem_Statics; \
public: \
	DECLARE_CLASS(APickupItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(APickupItem)


#define ARPG_Source_ARPG_PickupItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPickupItem(); \
	friend struct Z_Construct_UClass_APickupItem_Statics; \
public: \
	DECLARE_CLASS(APickupItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(APickupItem)


#define ARPG_Source_ARPG_PickupItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItem(APickupItem&&); \
	NO_API APickupItem(const APickupItem&); \
public:


#define ARPG_Source_ARPG_PickupItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItem(APickupItem&&); \
	NO_API APickupItem(const APickupItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupItem)


#define ARPG_Source_ARPG_PickupItem_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnClass() { return STRUCT_OFFSET(APickupItem, SpawnClass); } \
	FORCEINLINE static uint32 __PPO__Sphere() { return STRUCT_OFFSET(APickupItem, Sphere); } \
	FORCEINLINE static uint32 __PPO__SpawnItem() { return STRUCT_OFFSET(APickupItem, SpawnItem); }


#define ARPG_Source_ARPG_PickupItem_h_11_PROLOG
#define ARPG_Source_ARPG_PickupItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_PickupItem_h_14_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_PickupItem_h_14_SPARSE_DATA \
	ARPG_Source_ARPG_PickupItem_h_14_RPC_WRAPPERS \
	ARPG_Source_ARPG_PickupItem_h_14_INCLASS \
	ARPG_Source_ARPG_PickupItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_PickupItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_PickupItem_h_14_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_PickupItem_h_14_SPARSE_DATA \
	ARPG_Source_ARPG_PickupItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_PickupItem_h_14_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_PickupItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class APickupItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_PickupItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
