// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class TowerDefencePrototEditorTarget : TargetRules
{
	public TowerDefencePrototEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "TowerDefenceProtot" } );
	}
}
