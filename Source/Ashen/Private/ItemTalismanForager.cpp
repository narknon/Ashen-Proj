#include "ItemTalismanForager.h"

class ULootBoxComponent;
class ACreature;

void UItemTalismanForager::OnLootSpawning(const FLootDrop& LootDrop, float& ModifiableDropChance) {
}

void UItemTalismanForager::OnLootDropped(ULootBoxComponent* LootComponent, ACreature* LootOwner) {
}

TArray<FUIStatBarData> UItemTalismanForager::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanForager::UItemTalismanForager() {
    this->ChanceForExtraConsumables = 0.00f;
    this->BonusConsumableDropChance = 0.00f;
}

