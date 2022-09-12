#include "ItemTalismanScavenge.h"

void UItemTalismanScavenge::OnHeroDealtDamage(FAshenDamage& AshenDamage, bool& TestSample) {
}

TArray<FUIStatBarData> UItemTalismanScavenge::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanScavenge::UItemTalismanScavenge() {
    this->ChanceToRetrieveSpear = 0.00f;
    this->MaximumLootableSpears = 0;
}

