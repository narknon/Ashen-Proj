#include "AshenAIContext_Bombard.h"

class ACreature;
class AAITrigger;
class UAshenEventData;

void UAshenAIContext_Bombard::OnWakeTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

void UAshenAIContext_Bombard::OnCreatureDamaged(UAshenEventData* EventData) {
}

void UAshenAIContext_Bombard::OnCancelTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

void UAshenAIContext_Bombard::OnBombardTriggerExit(ACreature* Creature, AAITrigger* Trigger) {
}

void UAshenAIContext_Bombard::OnBombardTriggerEnter(ACreature* Creature, AAITrigger* Trigger) {
}

UAshenAIContext_Bombard::UAshenAIContext_Bombard() {
    this->bTriggerOnHeroOnly = true;
    this->BombardMinRelationLevel = EAIRelationship::Hostile;
    this->ForceWakePulse = 5.00f;
    this->ForceWakeOnCancelTrigger = 0.00f;
}

