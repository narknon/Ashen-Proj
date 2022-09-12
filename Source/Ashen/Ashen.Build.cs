using UnrealBuildTool;

public class Ashen : ModuleRules {
    public Ashen(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "ApexDestruction",
            "Core",
            "CoreUObject",
            "Engine",
            "Foliage",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
            "Paper2D",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
