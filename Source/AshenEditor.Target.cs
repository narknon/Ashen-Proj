using UnrealBuildTool;

public class AshenEditorTarget : TargetRules {
	public AshenEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"Ashen",
			"OnlineSubsystemAshenModule",
		});
	}
}
