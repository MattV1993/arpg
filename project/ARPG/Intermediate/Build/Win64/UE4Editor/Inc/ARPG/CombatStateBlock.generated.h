// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCombatSystemContext;
#ifdef ARPG_CombatStateBlock_generated_h
#error "CombatStateBlock.generated.h already included, missing '#pragma once' in CombatStateBlock.h"
#endif
#define ARPG_CombatStateBlock_generated_h

#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_SPARSE_DATA
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlockHitFinished);


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlockHitFinished);


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatStateBlock(); \
	friend struct Z_Construct_UClass_UCombatStateBlock_Statics; \
public: \
	DECLARE_CLASS(UCombatStateBlock, UCombatState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UCombatStateBlock)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCombatStateBlock(); \
	friend struct Z_Construct_UClass_UCombatStateBlock_Statics; \
public: \
	DECLARE_CLASS(UCombatStateBlock, UCombatState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UCombatStateBlock)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatStateBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatStateBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatStateBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatStateBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatStateBlock(UCombatStateBlock&&); \
	NO_API UCombatStateBlock(const UCombatStateBlock&); \
public:


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCombatStateBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatStateBlock(UCombatStateBlock&&); \
	NO_API UCombatStateBlock(const UCombatStateBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatStateBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatStateBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatStateBlock)


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_PRIVATE_PROPERTY_OFFSET
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_14_PROLOG
#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_RPC_WRAPPERS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_INCLASS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UCombatStateBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_CombatSystem_Public_CombatStateBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
