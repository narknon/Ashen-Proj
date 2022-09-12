#include "ItemTalismanSureFooted.h"

void UItemTalismanSureFooted::OnDamageModifier(FAshenDamage& AshenDamage, bool& TestSample) {
}

TArray<FUIStatBarData> UItemTalismanSureFooted::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanSureFooted::UItemTalismanSureFooted() {
    this->AdditionalPoiseMultiplier = 0.00f;
}

