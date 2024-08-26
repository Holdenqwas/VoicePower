// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VoicePower : ModuleRules
{
	public VoicePower(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG", "Niagara" });
	}
}
