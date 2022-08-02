// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LyraAnim : ModuleRules
{
	public LyraAnim(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
