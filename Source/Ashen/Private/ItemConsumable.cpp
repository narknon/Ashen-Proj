#include "ItemConsumable.h"

TArray<FUIStatBarData> UItemConsumable::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

bool UItemConsumable::DestroyWhenEmpty() {
    return false;
}

UItemConsumable::UItemConsumable() {
    this->Mesh = NULL;
    this->Effect = NULL;
    this->ConsumeAnim = NULL;
    this->OnConsumeSoundEffect = NULL;
    this->MaxConsumptionsPerAction = 3;
    this->bBlockMovementDuringConsumption = false;
}

