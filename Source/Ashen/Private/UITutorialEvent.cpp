#include "UITutorialEvent.h"

EUITutorialName UUITutorialEvent::GetTutorialName() {
    return EUITutorialName::None;
}

bool UUITutorialEvent::GetIsAddingType() {
    return false;
}

UUITutorialEvent::UUITutorialEvent() {
    this->bIsAddingType = false;
    this->TutorialName = EUITutorialName::None;
}

