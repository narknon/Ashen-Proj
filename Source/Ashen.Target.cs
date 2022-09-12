using UnrealBuildTool;

public class AshenTarget : TargetRules {
	public AshenTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"Ashen",
			"OnlineSubsystemAshenModule",
		});
	}
}
