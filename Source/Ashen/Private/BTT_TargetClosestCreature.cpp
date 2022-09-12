#include "BTT_TargetClosestCreature.h"

UBTT_TargetClosestCreature::UBTT_TargetClosestCreature() {
    this->OfRelationship = EAIRelationship::Hostile;
    this->bSkipVisibilityCheck = false;
}

