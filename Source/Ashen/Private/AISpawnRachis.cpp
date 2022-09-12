#include "AISpawnRachis.h"

class ACreature;
class AAITrigger;

void AAISpawnRachis::OnCliffTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

AAISpawnRachis::AAISpawnRachis() {
    this->bCliffRachis = false;
    this->bForceCliffSpawn = false;
    this->CliffIdleExtraOffset = 30.00f;
    this->bCinematicRachis = false;
    this->AIClassRef = NULL;
}

