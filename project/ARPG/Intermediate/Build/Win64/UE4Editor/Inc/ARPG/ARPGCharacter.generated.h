// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_ARPGCharacter_generated_h
#error "ARPGCharacter.generated.h already included, missing '#pragma once' in ARPGCharacter.h"
#endif
#define ARPG_ARPGCharacter_generated_h

#define ARPG_Source_ARPG_ARPGCharacter_h_13_SPARSE_DATA
#define ARPG_Source_ARPG_ARPGCharacter_h_13_RPC_WRAPPERS
#define ARPG_Source_ARPG_ARPGCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_ARPGCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARPGCharacter(); \
	friend struct Z_Construct_UClass_AARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(AARPGCharacter, AARPGCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AARPGCharacter)


#define ARPG_Source_ARPG_ARPGCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAARPGCharacter(); \
	friend struct Z_Construct_UClass_AARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(AARPGCharacter, AARPGCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AARPGCharacter)


#define ARPG_Source_ARPG_ARPGCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARPGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPGCharacter(AARPGCharacter&&); \
	NO_API AARPGCharacter(const AARPGCharacter&); \
public:


#define ARPG_Source_ARPG_ARPGCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPGCharacter(AARPGCharacter&&); \
	NO_API AARPGCharacter(const AARPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARPGCharacter)


#define ARPG_Source_ARPG_ARPGCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ZoomState() { return STRUCT_OFFSET(AARPGCharacter, ZoomState); } \
	FORCEINLINE static uint32 __PPO__Crosshair() { return STRUCT_OFFSET(AARPGCharacter, Crosshair); } \
	FORCEINLINE static uint32 __PPO__PickupItemDisplay() { return STRUCT_OFFSET(AARPGCharacter, PickupItemDisplay); } \
	FORCEINLINE static uint32 __PPO__Quickbar() { return STRUCT_OFFSET(AARPGCharacter, Quickbar); } \
	FORCEINLINE static uint32 __PPO__InventoryUI() { return STRUCT_OFFSET(AARPGCharacter, InventoryUI); }


#define ARPG_Source_ARPG_ARPGCharacter_h_10_PROLOG
#define ARPG_Source_ARPG_ARPGCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_ARPGCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_ARPGCharacter_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_ARPGCharacter_h_13_RPC_WRAPPERS \
	ARPG_Source_ARPG_ARPGCharacter_h_13_INCLASS \
	ARPG_Source_ARPG_ARPGCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_ARPGCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_ARPGCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_ARPGCharacter_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_ARPGCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_ARPGCharacter_h_13_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_ARPGCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class AARPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_ARPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
