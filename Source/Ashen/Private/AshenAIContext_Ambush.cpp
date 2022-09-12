#include "AshenAIContext_Ambush.h"

class ACreature;
class AAITrigger;

void UAshenAIContext_Ambush::OnAmbushTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

UAshenAIContext_Ambush::UAshenAIContext_Ambush() {
    this->bTriggerOnHeroOnly = true;
    this->AmbushMinRelationLevel = EAIRelationship::Hostile;
    this->ForceWakeOnAmbushTrigger = 5.00f;
    this->AmbushAutoFailDistance = 400.00f;
    this->AmbushMoveBreakDistance = 400.00f;
    this->AmbushMoveBreakDistancePrediction = 1.00f;
    this->AmbushTriggeredByCreature = NULL;
    this->AmbushTriggeredIn = NULL;
}

