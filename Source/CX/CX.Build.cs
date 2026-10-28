// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CX : ModuleRules
{
	public CX(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		// NOTE: UMG / Slate / SlateCore added — required to compile UUserWidget-derived
		// classes (CXUI, CXChatWidget, CXGameStatusUI). Without these the module will
		// fail to compile once those classes are added.
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore", "UMG", "Slate", "SlateCore" });
	}
}
