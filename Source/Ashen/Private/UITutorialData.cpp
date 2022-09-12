#include "UITutorialData.h"

FUITutorialData::FUITutorialData() {
    this->Tutorial_Name = EUITutorialName::None;
    this->Tutorial_Item = NULL;
    this->Tutorial_ItemType = EItemType::None;
    this->TutorialPosition = EUITutorialPosition::Default;
    this->TutorialWidgetClass = NULL;
    this->UseSecondaryTutorialSpace = false;
    this->TutorialDisplayTime = 0.00f;
    this->TutorialDisapearsOnPress = false;
    this->TutorialFocusWidget = NULL;
}

