// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class UTeam;
#ifdef ARPG_ARPGCharacterBase_generated_h
#error "ARPGCharacterBase.generated.h already included, missing '#pragma once' in ARPGCharacterBase.h"
#endif
#define ARPG_ARPGCharacterBase_generated_h

#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_SPARSE_DATA
#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execTryDodge); \
	DECLARE_FUNCTION(execSwapWeapons); \
	DECLARE_FUNCTION(execStopBlock); \
	DECLARE_FUNCTION(execStartBlock); \
	DECLARE_FUNCTION(execAttackReleased); \
	DECLARE_FUNCTION(execAttackPressed); \
	DECLARE_FUNCTION(execGetTeam); \
	DECLARE_FUNCTION(execGetCurrentStateString); \
	DECLARE_FUNCTION(execTryJump);


#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execTryDodge); \
	DECLARE_FUNCTION(execSwapWeapons); \
	DECLARE_FUNCTION(execStopBlock); \
	DECLARE_FUNCTION(execStartBlock); \
	DECLARE_FUNCTION(execAttackReleased); \
	DECLARE_FUNCTION(execAttackPressed); \
	DECLARE_FUNCTION(execGetTeam); \
	DECLARE_FUNCTION(execGetCurrentStateString); \
	DECLARE_FUNCTION(execTryJump);


#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARPGCharacterBase(); \
	friend struct Z_Construct_UClass_AARPGCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AARPGCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AARPGCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AARPGCharacterBase*>(this); }


#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAARPGCharacterBase(); \
	friend struct Z_Construct_UClass_AARPGCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AARPGCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AARPGCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AARPGCharacterBase*>(this); }


#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARPGCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARPGCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPGCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPGCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPGCharacterBase(AARPGCharacterBase&&); \
	NO_API AARPGCharacterBase(const AARPGCharacterBase&); \
public:


#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARPGCharacterBase(AARPGCharacterBase&&); \
	NO_API AARPGCharacterBase(const AARPGCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPGCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPGCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARPGCharacterBase)


#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AARPGCharacterBase, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AARPGCharacterBase, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__ZoomCamera() { return STRUCT_OFFSET(AARPGCharacterBase, ZoomCamera); } \
	FORCEINLINE static uint32 __PPO__ZoomCameraBoom() { return STRUCT_OFFSET(AARPGCharacterBase, ZoomCameraBoom); } \
	FORCEINLINE static uint32 __PPO__CurrentDummyArrow() { return STRUCT_OFFSET(AARPGCharacterBase, CurrentDummyArrow); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AARPGCharacterBase, Health); } \
	FORCEINLINE static uint32 __PPO__Team() { return STRUCT_OFFSET(AARPGCharacterBase, Team); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AARPGCharacterBase, Inventory); }


#define ARPG_Source_ARPG_ARPGCharacterBase_h_21_PROLOG
#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_SPARSE_DATA \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_RPC_WRAPPERS \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_INCLASS \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_ARPGCharacterBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_SPARSE_DATA \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_ARPGCharacterBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class AARPGCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_ARPGCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
