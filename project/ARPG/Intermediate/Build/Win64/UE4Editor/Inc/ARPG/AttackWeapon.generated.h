// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_AttackWeapon_generated_h
#error "AttackWeapon.generated.h already included, missing '#pragma once' in AttackWeapon.h"
#endif
#define ARPG_AttackWeapon_generated_h

#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_SPARSE_DATA
#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_RPC_WRAPPERS
#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackWeapon(); \
	friend struct Z_Construct_UClass_UAttackWeapon_Statics; \
public: \
	DECLARE_CLASS(UAttackWeapon, UAttack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UAttackWeapon)


#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAttackWeapon(); \
	friend struct Z_Construct_UClass_UAttackWeapon_Statics; \
public: \
	DECLARE_CLASS(UAttackWeapon, UAttack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UAttackWeapon)


#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttackWeapon(UAttackWeapon&&); \
	NO_API UAttackWeapon(const UAttackWeapon&); \
public:


#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttackWeapon(UAttackWeapon&&); \
	NO_API UAttackWeapon(const UAttackWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackWeapon)


#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponAnims() { return STRUCT_OFFSET(UAttackWeapon, WeaponAnims); }


#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_12_PROLOG
#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_SPARSE_DATA \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_RPC_WRAPPERS \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_INCLASS \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_SPARSE_DATA \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Attack_Public_AttackWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UAttackWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Attack_Public_AttackWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
