// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UCombatSystemContext;
#ifdef ARPG_CombatStateAttackHeavy_generated_h
#error "CombatStateAttackHeavy.generated.h already included, missing '#pragma once' in CombatStateAttackHeavy.h"
#endif
#define ARPG_CombatStateAttackHeavy_generated_h

#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_SPARSE_DATA
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTryTransitionStopAttack); \
	DECLARE_FUNCTION(execAttackFinished);


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryTransitionStopAttack); \
	DECLARE_FUNCTION(execAttackFinished);


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatStateAttackHeavy(); \
	friend struct Z_Construct_UClass_UCombatStateAttackHeavy_Statics; \
public: \
	DECLARE_CLASS(UCombatStateAttackHeavy, UCombatState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UCombatStateAttackHeavy)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCombatStateAttackHeavy(); \
	friend struct Z_Construct_UClass_UCombatStateAttackHeavy_Statics; \
public: \
	DECLARE_CLASS(UCombatStateAttackHeavy, UCombatState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UCombatStateAttackHeavy)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatStateAttackHeavy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatStateAttackHeavy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatStateAttackHeavy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatStateAttackHeavy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatStateAttackHeavy(UCombatStateAttackHeavy&&); \
	NO_API UCombatStateAttackHeavy(const UCombatStateAttackHeavy&); \
public:


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatStateAttackHeavy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatStateAttackHeavy(UCombatStateAttackHeavy&&); \
	NO_API UCombatStateAttackHeavy(const UCombatStateAttackHeavy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatStateAttackHeavy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatStateAttackHeavy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatStateAttackHeavy)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_PRIVATE_PROPERTY_OFFSET
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_10_PROLOG
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_RPC_WRAPPERS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_INCLASS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UCombatStateAttackHeavy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_CombatSystem_Public_CombatStateAttackHeavy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
