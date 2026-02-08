using UnrealBuildTool;

public class CoRiderUnrealEngine : ModuleRules
{
	public CoRiderUnrealEngine(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"EditorSubsystem",
			"HTTPServer",
			"Json",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"AssetRegistry",
			"BlueprintGraph",
			"UMG",
			"UMGEditor",
		});
	}
}
