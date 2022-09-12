#include "ItemTalismanWindRunner.h"

void UItemTalismanWindRunner::OnStaminaConsumed(float& _stamina, EStaminaDrainType _drainType) {
}

void UItemTalismanWindRunner::OnDamageReceived(FAshenDamage& _damage) {
}

TArray<FUIStatBarData> UItemTalismanWindRunner::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanWindRunner::UItemTalismanWindRunner() {
    this->FallDamageModifier = 0.00f;
    this->SprintCostModifier = 0.00f;
}

