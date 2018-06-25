// Fill out your copyright notice in the Description page of Project Settings.

#include "AIColor.h"

FLinearColor GetColorByEnum(EAiColor EColor)
{
	FLinearColor OutputColor;
	switch (EColor)
	{
		
	case EAiColor::AC_White:
		OutputColor = FLinearColor(255.0, 255.0, 255.0, 1.0);
		break;
	case EAiColor::AC_Red:
		OutputColor = FLinearColor(255.0, 0.0, 0.0, 1.0);
		break;
	case EAiColor::AC_Blue:
		OutputColor = FLinearColor(0.0, 0.0, 255.0, 1.0);
		break;
	case EAiColor::AC_Green:
		OutputColor = FLinearColor(0.0, 255.0, 0.0, 1.0);
		break;


	default:
		OutputColor = FLinearColor(0.0, 0.0, 0.0, 1.0);
		break;
	}



	return OutputColor;
}
