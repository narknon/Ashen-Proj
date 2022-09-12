#include "AshenBaseState.h"

class UAshenUserWidget;
class UWidget;

void AAshenBaseState::ForceWidgetSelection(UWidget* WidgetToSelect) {
}

void AAshenBaseState::ChangePlayState(EPlayState NewPlayState, UAshenUserWidget* FocusOverride) {
}

bool AAshenBaseState::CanPlayNightstormDLC() const {
    return false;
}

AAshenBaseState::AAshenBaseState() {
    this->PlayState = EPlayState::None;
    this->AshenGameInstance = NULL;
}

