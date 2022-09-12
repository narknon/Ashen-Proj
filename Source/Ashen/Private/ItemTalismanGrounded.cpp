#include "ItemTalismanGrounded.h"

void UItemTalismanGrounded::OnSetWeightState(EWeight& _weightState) {
}

TArray<FUIStatBarData> UItemTalismanGrounded::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanGrounded::UItemTalismanGrounded() {
    this->WeightIncrease = 0.00f;
}

