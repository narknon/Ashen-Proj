#include "ItemEquipment.h"

void UItemEquipment::SetState(EEquipmentState NewState) {
}




void UItemEquipment::OnEquipmentStateChange_Implementation(EEquipmentState PreviousState) {
}


EEquipmentState UItemEquipment::GetState() {
    return EEquipmentState::Undefined;
}

TArray<FUIStatBarData> UItemEquipment::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemEquipment::UItemEquipment() {
    this->EquipAnimation = NULL;
    this->UnequipAnimation = NULL;
    this->UseAnimation = NULL;
    this->bUsesTwoHands = false;
    this->CurrentState = EEquipmentState::Undefined;
    this->bGhostState = false;
}

