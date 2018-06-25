// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIColor() {}
// Cross Module References
	TOWERDEFENCEPROTOT_API UEnum* Z_Construct_UEnum_TowerDefenceProtot_EAiColor();
	UPackage* Z_Construct_UPackage__Script_TowerDefenceProtot();
// End Cross Module References
	static UEnum* EAiColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TowerDefenceProtot_EAiColor, Z_Construct_UPackage__Script_TowerDefenceProtot(), TEXT("EAiColor"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAiColor(EAiColor_StaticEnum, TEXT("/Script/TowerDefenceProtot"), TEXT("EAiColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TowerDefenceProtot_EAiColor_CRC() { return 41277499U; }
	UEnum* Z_Construct_UEnum_TowerDefenceProtot_EAiColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TowerDefenceProtot();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAiColor"), 0, Get_Z_Construct_UEnum_TowerDefenceProtot_EAiColor_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAiColor::AC_White", (int64)EAiColor::AC_White },
				{ "EAiColor::AC_Red", (int64)EAiColor::AC_Red },
				{ "EAiColor::AC_Blue", (int64)EAiColor::AC_Blue },
				{ "EAiColor::AC_Green", (int64)EAiColor::AC_Green },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AC_Blue.DisplayName", "Blue" },
				{ "AC_Green.DisplayName", "Green" },
				{ "AC_Red.DisplayName", "Red" },
				{ "AC_White.DisplayName", "White" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "AIColor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TowerDefenceProtot,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAiColor",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAiColor",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
