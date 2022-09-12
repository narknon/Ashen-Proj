#include "AISpawnScag.h"

class ACreature;
class AAITrigger;

void AAISpawnScag::OnTumbleTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

void AAISpawnScag::OnCliffHangExitTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

AAISpawnScag::AAISpawnScag() {
    this->ScagSpawnState = EScagSpawnState::Ground;
    this->bCliffTurrentMode = false;
    this->bBellRinger = true;
    this->bOverrideBellRanges = false;
    this->SurfaceClingOffset = 0.00f;
    this->AIClassRef = NULL;
}

