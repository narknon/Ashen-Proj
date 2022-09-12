#include "ItemTalismanPlacebo.h"

class UItemConsumable;

void UItemTalismanPlacebo::OnConsumableUsed(UItemConsumable* Consumable) {
}

TArray<FUIStatBarData> UItemTalismanPlacebo::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanPlacebo::UItemTalismanPlacebo() {
}

