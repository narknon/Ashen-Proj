#include "ItemTalismanAxungHominis.h"

class ULootBoxComponent;
class ACreature;

void UItemTalismanAxungHominis::OnLootModified(ULootBoxComponent* _lootComp, ACreature* _lootOwner) {
}

TArray<FUIStatBarData> UItemTalismanAxungHominis::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanAxungHominis::UItemTalismanAxungHominis() {
    this->SpawnedConsumableClass = NULL;
    this->ChanceToSpawnFlesh = 0.00f;
}

