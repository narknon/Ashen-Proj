#include "ToggleEquipmentAction.h"

AToggleEquipmentAction::AToggleEquipmentAction() {
    this->CurrentLeftEquipment = NULL;
    this->CurrentRightEquipment = NULL;
    this->bOnSecondAnimation = false;
    this->SetStateTo = EEquipmentState::Undefined;
}

