#include "ItemTalismanVeiled.h"

void UItemTalismanVeiled::ModifyCriticalHitChance(float& Chance) {
}

TArray<FUIStatBarData> UItemTalismanVeiled::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanVeiled::UItemTalismanVeiled() {
    this->AdditionalCriticalChance = 0.00f;
}

