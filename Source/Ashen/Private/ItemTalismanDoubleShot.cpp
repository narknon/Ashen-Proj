#include "ItemTalismanDoubleShot.h"

class UItemTable;
class UItemBase;

void UItemTalismanDoubleShot::OnItemRemoved(UItemTable* Source, UItemBase* Item) {
}

void UItemTalismanDoubleShot::OnItemAdded(UItemTable* Source, UItemBase* Item) {
}

TArray<FUIStatBarData> UItemTalismanDoubleShot::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanDoubleShot::UItemTalismanDoubleShot() {
    this->BuffDurationMultiplier = 0.00f;
    this->NumExtraWaterBottleCharges = 1;
}

