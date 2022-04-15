// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCombatSystemContext;
#ifdef ARPG_CombatStateDodge_generated_h
#error "CombatStateDodge.generated.h already included, missing '#pragma once' in CombatStateDodge.h"
#endif
#define ARPG_CombatStateDodge_generated_h

#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_SPARSE_DATA
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndDelayFinished); \
	DECLARE_FUNCTION(execDodgeFinished);


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndDelayFinished); \
	DECLARE_FUNCTION(execDodgeFinished);


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatStateDodge(); \
	friend struct Z_Construct_UClass_UCombatStateDodge_Statics; \
public: \
	DECLARE_CLASS(UCombatStateDodge, UCombatState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UCombatStateDodge)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCombatStateDodge(); \
	friend struct Z_Construct_UClass_UCombatStateDodge_Statics; \
public: \
	DECLARE_CLASS(UCombatStateDodge, UCombatState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UCombatStateDodge)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatStateDodge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatStateDodge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatStateDodge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatStateDodge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatStateDodge(UCombatStateDodge&&); \
	NO_API UCombatStateDodge(const UCombatStateDodge&); \
public:


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatStateDodge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatStateDodge(UCombatStateDodge&&); \
	NO_API UCombatStateDodge(const UCombatStateDodge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatStateDodge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatStateDodge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatStateDodge)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_PRIVATE_PROPERTY_OFFSET
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_12_PROLOG
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_SPARSE_DATA \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_RPC_WRAPPERS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_INCLASS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_SPARSE_DATA \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UCombatStateDodge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_CombatSystem_Public_CombatStateDodge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
