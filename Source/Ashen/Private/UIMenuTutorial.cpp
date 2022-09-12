#include "UIMenuTutorial.h"

void UUIMenuTutorial::UpdateTutorialGridSlots(bool ClearAll) {
}

void UUIMenuTutorial::UpdateFunction(float DeltaTime) {
}


void UUIMenuTutorial::RemoveTutorial() {
}

UUIMenuTutorial::UUIMenuTutorial() {
    this->Tutorial_Name = EUITutorialName::None;
    this->Tutorial_Item = NULL;
    this->Tutorial_ItemType = EItemType::None;
    this->TutorialPosition = EUITutorialPosition::Default;
    this->TutorialWidgetClass = NULL;
    this->TutorialDisplayTime = 0.00f;
    this->TutorialDisapearsOnPress = true;
    this->TutorialFocusWidget = NULL;
    this->OwningTab = NULL;
    this->AlphaValue = 0.00f;
    this->RemovePending = false;
    this->FocusGridSlot = NULL;
    this->LastItemIndex = -1;
}

