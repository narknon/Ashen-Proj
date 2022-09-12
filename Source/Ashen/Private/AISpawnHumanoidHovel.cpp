#include "AISpawnHumanoidHovel.h"

class ACreature;
class AAITrigger;

void AAISpawnHumanoidHovel::OnTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

AAISpawnHumanoidHovel::AAISpawnHumanoidHovel() {
    this->IdleLoopMontage = NULL;
    this->bDiscoverTriggerer = false;
}

