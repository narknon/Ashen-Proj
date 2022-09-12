#include "AshenAIContext_Challenge.h"

class UAshenEventData;
class ACreature;
class AAITrigger;

void UAshenAIContext_Challenge::OnCreatureDeath(UAshenEventData* EventData) {
}

void UAshenAIContext_Challenge::OnCreatureDamaged(UAshenEventData* EventData) {
}

void UAshenAIContext_Challenge::OnChallengeTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

void UAshenAIContext_Challenge::OnBreakTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

UAshenAIContext_Challenge::UAshenAIContext_Challenge() {
    this->bTriggerOnHeroOnly = true;
    this->ChallengeMinRelationLevel = EAIRelationship::Hostile;
    this->ForceWakeOnChallengeTrigger = 5.00f;
    this->MoveInterceptResponsePrediction = 2.00f;
    this->ChallengeCompleteRelationChange = EAIRelationship::Friend;
}

