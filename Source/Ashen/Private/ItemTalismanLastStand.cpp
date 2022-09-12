#include "ItemTalismanLastStand.h"

TArray<FUIStatBarData> UItemTalismanLastStand::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

float UItemTalismanLastStand::GetDamageMultiplierForHealth(float CurrentHealthPercentage) {
    return 0.0f;
}

UItemTalismanLastStand::UItemTalismanLastStand() {
    this->LastStandBuffEffectClass = NULL;
    this->TalismanBuffEffect = NULL;
}

