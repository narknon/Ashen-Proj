#include "EquipmentHandlingAction.h"

class UItemEquipment;

void AEquipmentHandlingAction::ReequipEquipment() {
}

bool AEquipmentHandlingAction::IsRightHandStored() {
    return false;
}

bool AEquipmentHandlingAction::IsLeftHandStored() {
    return false;
}

UItemEquipment* AEquipmentHandlingAction::GetRightHandEquipment() {
    return NULL;
}

UItemEquipment* AEquipmentHandlingAction::GetLeftHandEquipment() {
    return NULL;
}

AEquipmentHandlingAction::AEquipmentHandlingAction() {
    this->bZeroVelocityAction = true;
    this->OriginalMontage = NULL;
    this->LeftHandEquipment = NULL;
    this->RightHandEquipment = NULL;
}

