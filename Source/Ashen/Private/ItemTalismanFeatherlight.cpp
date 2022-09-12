#include "ItemTalismanFeatherlight.h"

void UItemTalismanFeatherlight::OnSetWeightState(EWeight& _weightState) {
}

TArray<FUIStatBarData> UItemTalismanFeatherlight::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanFeatherlight::UItemTalismanFeatherlight() {
    this->WeightReduction = 0.00f;
}

