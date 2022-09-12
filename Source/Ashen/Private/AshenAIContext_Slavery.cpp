#include "AshenAIContext_Slavery.h"

class UAshenEventData;

void UAshenAIContext_Slavery::OnCreatureDeath(UAshenEventData* EventData) {
}

UAshenAIContext_Slavery::UAshenAIContext_Slavery() {
    this->RebelAtAverageHealthPercentage = 0.00f;
    this->HeroRelationshipOnFreedom = EAIRelationship::Friend;
    this->HeroRelationshipOnRebel = EAIRelationship::Friend;
    this->ChangeContextOnFreedom = EAIContextType::None;
    this->ChangeBTOnFreedom = NULL;
    this->bChangeMasterFactionRelationshipOnRebel = false;
    this->bRunToFreedom = false;
}

