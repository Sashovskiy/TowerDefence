// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Ai_Move.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAi_Move() {}
// Cross Module References
	TOWERDEFENCEPROTOT_API UClass* Z_Construct_UClass_AAi_Move_NoRegister();
	TOWERDEFENCEPROTOT_API UClass* Z_Construct_UClass_AAi_Move();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TowerDefenceProtot();
// End Cross Module References
	void AAi_Move::StaticRegisterNativesAAi_Move()
	{
	}
	UClass* Z_Construct_UClass_AAi_Move_NoRegister()
	{
		return AAi_Move::StaticClass();
	}
	UClass* Z_Construct_UClass_AAi_Move()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_TowerDefenceProtot,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Ai_Move.h" },
				{ "ModuleRelativePath", "Ai_Move.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAi_Move>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAi_Move::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAi_Move, 1220191806);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAi_Move(Z_Construct_UClass_AAi_Move, &AAi_Move::StaticClass, TEXT("/Script/TowerDefenceProtot"), TEXT("AAi_Move"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAi_Move);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
