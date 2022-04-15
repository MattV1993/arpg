// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageSpec;
class USkeletalMeshComponent;
#ifdef ARPG_Attack_generated_h
#error "Attack.generated.h already included, missing '#pragma once' in Attack.h"
#endif
#define ARPG_Attack_generated_h

#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_SPARSE_DATA
#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCombo); \
	DECLARE_FUNCTION(execGetDamageSpec); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execUse);


#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCombo); \
	DECLARE_FUNCTION(execGetDamageSpec); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execUse);


#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttack(); \
	friend struct Z_Construct_UClass_UAttack_Statics; \
public: \
	DECLARE_CLASS(UAttack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UAttack)


#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAttack(); \
	friend struct Z_Construct_UClass_UAttack_Statics; \
public: \
	DECLARE_CLASS(UAttack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UAttack)


#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttack(UAttack&&); \
	NO_API UAttack(const UAttack&); \
public:


#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttack(UAttack&&); \
	NO_API UAttack(const UAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttack)


#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Anims() { return STRUCT_OFFSET(UAttack, Anims); } \
	FORCEINLINE static uint32 __PPO__Combo() { return STRUCT_OFFSET(UAttack, Combo); }


#define ARPG_Source_ARPG_Attack_Public_Attack_h_14_PROLOG
#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_RPC_WRAPPERS \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_INCLASS \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Attack_Public_Attack_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Attack_Public_Attack_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Attack_Public_Attack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
