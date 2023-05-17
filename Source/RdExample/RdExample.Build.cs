// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RdExample : ModuleRules
{
	public RdExample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "RetroDebug" });
	}
}
