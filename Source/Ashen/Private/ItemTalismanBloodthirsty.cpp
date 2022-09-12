#include "ItemTalismanBloodthirsty.h"

class UAshenEventData;

void UItemTalismanBloodthirsty::OnEnemyKilled(UAshenEventData* AshenEventData) {
}

TArray<FUIStatBarData> UItemTalismanBloodthirsty::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanBloodthirsty::UItemTalismanBloodthirsty() {
    this->BloodthirstyBuffEffectClass = NULL;
    this->IncreasedDamagePercentagePerStack = 0.00f;
    this->SingleStackDuration = 0.00f;
    this->MaxStacks = 0;
    this->TalismanBuffEffect = NULL;
}

