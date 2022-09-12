#include "AshenAIContext_Wraith.h"

class ACreature;
class AAITrigger;

void UAshenAIContext_Wraith::OnTeleportTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

void UAshenAIContext_Wraith::OnCancelTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

UAshenAIContext_Wraith::UAshenAIContext_Wraith() {
    this->ForceWakeOnTrigger = 5.00f;
    this->bAllowMultipleRuleOverlap = false;
}

