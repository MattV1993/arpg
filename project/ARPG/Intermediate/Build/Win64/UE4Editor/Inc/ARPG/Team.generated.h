// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_Team_generated_h
#error "Team.generated.h already included, missing '#pragma once' in Team.h"
#endif
#define ARPG_Team_generated_h

#define ARPG_Source_ARPG_Team_h_10_SPARSE_DATA
#define ARPG_Source_ARPG_Team_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execSetName);


#define ARPG_Source_ARPG_Team_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execSetName);


#define ARPG_Source_ARPG_Team_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTeam(); \
	friend struct Z_Construct_UClass_UTeam_Statics; \
public: \
	DECLARE_CLASS(UTeam, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UTeam)


#define ARPG_Source_ARPG_Team_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUTeam(); \
	friend struct Z_Construct_UClass_UTeam_Statics; \
public: \
	DECLARE_CLASS(UTeam, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UTeam)


#define ARPG_Source_ARPG_Team_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTeam(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTeam) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTeam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTeam); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTeam(UTeam&&); \
	NO_API UTeam(const UTeam&); \
public:


#define ARPG_Source_ARPG_Team_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTeam(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTeam(UTeam&&); \
	NO_API UTeam(const UTeam&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTeam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTeam); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTeam)


#define ARPG_Source_ARPG_Team_h_10_PRIVATE_PROPERTY_OFFSET
#define ARPG_Source_ARPG_Team_h_7_PROLOG
#define ARPG_Source_ARPG_Team_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Team_h_10_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Team_h_10_SPARSE_DATA \
	ARPG_Source_ARPG_Team_h_10_RPC_WRAPPERS \
	ARPG_Source_ARPG_Team_h_10_INCLASS \
	ARPG_Source_ARPG_Team_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Team_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Team_h_10_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Team_h_10_SPARSE_DATA \
	ARPG_Source_ARPG_Team_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Team_h_10_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Team_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UTeam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Team_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
