#include "ItemTalismanFierce.h"

TArray<FUIStatBarData> UItemTalismanFierce::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanFierce::UItemTalismanFierce() {
    this->DamagePercentageMultiplier = 0.00f;
    this->FierceBuffEffectClass = NULL;
    this->TalismanBuffEffect = NULL;
}

