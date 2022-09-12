#include "UIDynamicMenuSelector.h"

class UUIDynamicMenuOption;
class UAshenGameInstance;

void UUIDynamicMenuSelector::UIReturnNewValue(float Value) {
}



void UUIDynamicMenuSelector::SetValue(float Number, bool AnimateUI, bool SetupCall) {
}


void UUIDynamicMenuSelector::SetupFromOption(UUIDynamicMenuOption* Owner, UAshenGameInstance* GameInstance) {
}



void UUIDynamicMenuSelector::SaveValue() {
}

float UUIDynamicMenuSelector::MapSelectorValue(float Number, bool ToSave) {
    return 0.0f;
}

bool UUIDynamicMenuSelector::FlipValue() {
    return false;
}

UUIDynamicMenuSelector::UUIDynamicMenuSelector() {
    this->OwningOption = NULL;
    this->SelectorType = EDynamicMenuOptionType::None;
    this->NumberIndex = 0;
    this->LastSetValue = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
}

