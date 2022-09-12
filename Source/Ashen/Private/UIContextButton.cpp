#include "UIContextButton.h"

bool UUIContextButton::GetInputState(EInputEventNames InputEventName) {
    return false;
}

bool UUIContextButton::DoesOwningMenuTabHaveFocus() const {
    return false;
}

UUIContextButton::UUIContextButton() {
    this->OwningMenuTab = NULL;
    this->FadeOutWhenParentTabNotInFocus = false;
    this->AshenPlayerController = NULL;
}

