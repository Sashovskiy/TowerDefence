// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "AIColor.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EAiColor :uint8
{
	AC_White	UMETA(DisplayName = "White"),
	AC_Red	UMETA(DisplayName = "Red"),
	AC_Blue	UMETA(DisplayName = "Blue"),
	AC_Green	UMETA(DisplayName = "Green")
};

FLinearColor GetColorByEnum(EAiColor EColor);