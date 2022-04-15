// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_HitReceiver_generated_h
#error "HitReceiver.generated.h already included, missing '#pragma once' in HitReceiver.h"
#endif
#define ARPG_HitReceiver_generated_h

#define ARPG_Source_ARPG_HitReceiver_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitSpec_Statics; \
	ARPG_API static class UScriptStruct* StaticStruct();


template<> ARPG_API UScriptStruct* StaticStruct<struct FHitSpec>();

#define ARPG_Source_ARPG_HitReceiver_h_15_SPARSE_DATA
#define ARPG_Source_ARPG_HitReceiver_h_15_RPC_WRAPPERS
#define ARPG_Source_ARPG_HitReceiver_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_HitReceiver_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UHitReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UHitReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UHitReceiver(UHitReceiver&&); \
	ARPG_API UHitReceiver(const UHitReceiver&); \
public:


#define ARPG_Source_ARPG_HitReceiver_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UHitReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UHitReceiver(UHitReceiver&&); \
	ARPG_API UHitReceiver(const UHitReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UHitReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitReceiver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitReceiver)


#define ARPG_Source_ARPG_HitReceiver_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHitReceiver(); \
	friend struct Z_Construct_UClass_UHitReceiver_Statics; \
public: \
	DECLARE_CLASS(UHitReceiver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ARPG"), ARPG_API) \
	DECLARE_SERIALIZER(UHitReceiver)


#define ARPG_Source_ARPG_HitReceiver_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_HitReceiver_h_15_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_HitReceiver_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_HitReceiver_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_HitReceiver_h_15_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_HitReceiver_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_HitReceiver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHitReceiver() {} \
public: \
	typedef UHitReceiver UClassType; \
	typedef IHitReceiver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_HitReceiver_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IHitReceiver() {} \
public: \
	typedef UHitReceiver UClassType; \
	typedef IHitReceiver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_HitReceiver_h_12_PROLOG
#define ARPG_Source_ARPG_HitReceiver_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_HitReceiver_h_15_SPARSE_DATA \
	ARPG_Source_ARPG_HitReceiver_h_15_RPC_WRAPPERS \
	ARPG_Source_ARPG_HitReceiver_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_HitReceiver_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_HitReceiver_h_15_SPARSE_DATA \
	ARPG_Source_ARPG_HitReceiver_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_HitReceiver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UHitReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_HitReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
