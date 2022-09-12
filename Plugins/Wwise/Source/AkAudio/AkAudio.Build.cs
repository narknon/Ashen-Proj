using UnrealBuildTool;

public class AkAudio : ModuleRules {
    public AkAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
