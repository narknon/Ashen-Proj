#include "UIOptionsMenu.h"

class USoundClass;

void UUIOptionsMenu::SetSoundClassVolumeValue(USoundClass* TargetClass, float VolumeValue) {
}

bool UUIOptionsMenu::HasMultiDirectionalTabSwitching_Implementation() const {
    return false;
}

float UUIOptionsMenu::GetSoundClassVolumeValue(USoundClass* TargetClass) {
    return 0.0f;
}

UUIOptionsMenu::UUIOptionsMenu() {
    this->ScaleGlow = false;
    this->MenuDepth = 0;
    this->LerpInTimer = 0.00f;
}

