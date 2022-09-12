#include "AshenAIContext_Lookout.h"

class ACreature;
class AAITrigger;

void UAshenAIContext_Lookout::OnLookoutTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

UAshenAIContext_Lookout::UAshenAIContext_Lookout() {
    this->WatchMarker = NULL;
    this->SightTriggerDistanceLimit = 0.00f;
    this->bTriggerOnHeroOnly = true;
    this->ReportMinRelationLevel = EAIRelationship::Hostile;
    this->ReportMarker = NULL;
    this->ChangeGroupContextOnReport = EAIContextType::None;
    this->ChangeGroupBTOnReport = NULL;
    this->bForgetReportedCreatureOnReport = false;
    this->bOnlyReportToAlliesInPerceptionRange = false;
    this->ForceWakeOnReportSeconds = 5.00f;
    this->ForceWakeOnTrigger = 5.00f;
    this->LookoutTriggeredByCreature = NULL;
    this->LookoutTriggeredIn = NULL;
}

