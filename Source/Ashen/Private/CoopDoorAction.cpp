#include "CoopDoorAction.h"

class ULevelStreaming;

void ACoopDoorAction::OnLevelShown(ULevelStreaming* StreamingLevel) {
}

void ACoopDoorAction::OnLevelHidden(ULevelStreaming* StreamingLevel) {
}

ECoopDoorActionState ACoopDoorAction::GetCoopActionState() {
    return ECoopDoorActionState::Undefined;
}

ACoopDoorAction::ACoopDoorAction() {
    this->CoopDoor = NULL;
    this->GameMode = NULL;
}

