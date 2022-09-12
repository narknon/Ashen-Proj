#include "SpearedEnemyTracker.h"

class ULootBoxComponent;
class ACreature;

void USpearedEnemyTracker::OnEnemyLootSpawned(ULootBoxComponent* LootComponent, ACreature* LootOwner) {
}

USpearedEnemyTracker::USpearedEnemyTracker() {
    this->ProjectileClass = NULL;
}

