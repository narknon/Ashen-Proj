#include "OutfitBuff_Flea.h"

class ULootBoxComponent;
class ACreature;

void UOutfitBuff_Flea::OnLootModified(ULootBoxComponent* _lootComp, ACreature* _lootOwner) {
}

UOutfitBuff_Flea::UOutfitBuff_Flea() {
    this->ChanceToSpawnJunk = 0.00f;
    this->SpawnedJunkClass = NULL;
}

