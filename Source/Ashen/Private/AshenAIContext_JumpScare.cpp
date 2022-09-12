#include "AshenAIContext_JumpScare.h"

class ACreature;
class AAITrigger;

void UAshenAIContext_JumpScare::OnJumpScareTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

void UAshenAIContext_JumpScare::OnCancelTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

UAshenAIContext_JumpScare::UAshenAIContext_JumpScare() {
    this->JumpScareMarker = NULL;
    this->JumpScareTrigger = NULL;
    this->RunningJumpScareTrigger = NULL;
    this->SprintingJumpScareTrigger = NULL;
    this->CancelTrigger = NULL;
    this->bTriggerOnHeroOnly = true;
    this->bTargetTriggeringCreatureFirst = true;
    this->bCancelOnGroupAlert = true;
    this->JumpScareResetTimer = 5.00f;
    this->ForceWakeOnTrigger = 5.00f;
}

