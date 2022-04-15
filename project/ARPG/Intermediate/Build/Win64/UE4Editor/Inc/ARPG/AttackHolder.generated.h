// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_AttackHolder_generated_h
#error "AttackHolder.generated.h already included, missing '#pragma once' in AttackHolder.h"
#endif
#define ARPG_AttackHolder_generated_h

#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_SPARSE_DATA
#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_RPC_WRAPPERS
#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UAttackHolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackHolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UAttackHolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackHolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UAttackHolder(UAttackHolder&&); \
	ARPG_API UAttackHolder(const UAttackHolder&); \
public:


#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UAttackHolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UAttackHolder(UAttackHolder&&); \
	ARPG_API UAttackHolder(const UAttackHolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UAttackHolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackHolder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackHolder)


#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAttackHolder(); \
	friend struct Z_Construct_UClass_UAttackHolder_Statics; \
public: \
	DECLARE_CLASS(UAttackHolder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ARPG"), ARPG_API) \
	DECLARE_SERIALIZER(UAttackHolder)


#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAttackHolder() {} \
public: \
	typedef UAttackHolder UClassType; \
	typedef IAttackHolder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IAttackHolder() {} \
public: \
	typedef UAttackHolder UClassType; \
	typedef IAttackHolder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_13_PROLOG
#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_SPARSE_DATA \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_RPC_WRAPPERS \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Attack_Public_AttackHolder_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_SPARSE_DATA \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Attack_Public_AttackHolder_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UAttackHolder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Attack_Public_AttackHolder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
