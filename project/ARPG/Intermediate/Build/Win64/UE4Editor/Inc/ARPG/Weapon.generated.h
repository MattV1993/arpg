// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define ARPG_Weapon_generated_h

#define ARPG_Source_ARPG_Weapon_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponSpec_Statics; \
	ARPG_API static class UScriptStruct* StaticStruct();


template<> ARPG_API UScriptStruct* StaticStruct<struct FWeaponSpec>();

#define ARPG_Source_ARPG_Weapon_h_27_SPARSE_DATA
#define ARPG_Source_ARPG_Weapon_h_27_RPC_WRAPPERS
#define ARPG_Source_ARPG_Weapon_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_Weapon_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AEquipment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define ARPG_Source_ARPG_Weapon_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AEquipment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define ARPG_Source_ARPG_Weapon_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define ARPG_Source_ARPG_Weapon_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define ARPG_Source_ARPG_Weapon_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Spec() { return STRUCT_OFFSET(AWeapon, Spec); } \
	FORCEINLINE static uint32 __PPO__StandardAttack() { return STRUCT_OFFSET(AWeapon, StandardAttack); } \
	FORCEINLINE static uint32 __PPO__HeavyAttack() { return STRUCT_OFFSET(AWeapon, HeavyAttack); }


#define ARPG_Source_ARPG_Weapon_h_24_PROLOG
#define ARPG_Source_ARPG_Weapon_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Weapon_h_27_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Weapon_h_27_SPARSE_DATA \
	ARPG_Source_ARPG_Weapon_h_27_RPC_WRAPPERS \
	ARPG_Source_ARPG_Weapon_h_27_INCLASS \
	ARPG_Source_ARPG_Weapon_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Weapon_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Weapon_h_27_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Weapon_h_27_SPARSE_DATA \
	ARPG_Source_ARPG_Weapon_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Weapon_h_27_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Weapon_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
