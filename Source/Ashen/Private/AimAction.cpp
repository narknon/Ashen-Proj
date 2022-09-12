#include "AimAction.h"

void AAimAction::Throw() {
}

void AAimAction::OnPlayStateChanged(EPlayState OldState, EPlayState NewState) {
}

void AAimAction::EndAim() {
}

AAimAction::AAimAction() {
    this->Hero = NULL;
    this->ThrownWeapon = NULL;
    this->AshenController = NULL;
}

