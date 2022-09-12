#include "ItemTalismanGrit.h"

void UItemTalismanGrit::OnDamageTaken(FAshenDamage& AshenDamage) {
}

TArray<FUIStatBarData> UItemTalismanGrit::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanGrit::UItemTalismanGrit() {
    this->PercentageDamageReduction = 0.00f;
}

