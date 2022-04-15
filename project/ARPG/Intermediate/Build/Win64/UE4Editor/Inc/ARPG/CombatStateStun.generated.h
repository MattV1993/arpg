// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCombatSystemContext;
#ifdef ARPG_CombatStateStun_generated_h
#error "CombatStateStun.generated.h already included, missing '#pragma once' in CombatStateStun.h"
#endif
#define ARPG_CombatStateStun_generated_h

#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStunAnims_Statics; \
	ARPG_API static class UScriptStruct* StaticStruct();


template<> ARPG_API UScriptStruct* StaticStruct<struct FStunAnims>();

#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_SPARSE_DATA
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStunFinished);


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStunFinished);


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatStateStun(); \
	friend struct Z_Construct_UClass_UCombatStateStun_Statics; \
public: \
	DECLARE_CLASS(UCombatStateStun, UCombatState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UCombatStateStun)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUCombatStateStun(); \
	friend struct Z_Construct_UClass_UCombatStateStun_Statics; \
public: \
	DECLARE_CLASS(UCombatStateStun, UCombatState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UCombatStateStun)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatStateStun(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatStateStun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatStateStun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatStateStun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatStateStun(UCombatStateStun&&); \
	NO_API UCombatStateStun(const UCombatStateStun&); \
public:


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatStateStun(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatStateStun(UCombatStateStun&&); \
	NO_API UCombatStateStun(const UCombatStateStun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatStateStun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatStateStun); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatStateStun)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_PRIVATE_PROPERTY_OFFSET
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_27_PROLOG
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_SPARSE_DATA \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_RPC_WRAPPERS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_INCLASS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_SPARSE_DATA \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UCombatStateStun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_CombatSystem_Public_CombatStateStun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
