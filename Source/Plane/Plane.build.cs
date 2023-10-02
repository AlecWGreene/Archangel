// Copyright Alec Greene. All Rights Reserved.

using UnrealBuildTool;

public class Plane : ModuleRules
{
	public Plane(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"DeveloperSettings",
			"Engine", 
			"GameplayAbilities",
			"InputCore", 
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
			
		});
	}
}