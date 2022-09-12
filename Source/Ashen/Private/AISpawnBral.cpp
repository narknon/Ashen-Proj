#include "AISpawnBral.h"

class ACreature;
class AAITrigger;

void AAISpawnBral::OnCliffTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

AAISpawnBral::AAISpawnBral() {
    this->bCliffBral = false;
    this->CliffIdleExtraOffset = 0.00f;
    this->AIClassRef = NULL;
}

