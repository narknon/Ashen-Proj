#include "BTT_TargetClosestCreatureWithLantern.h"

UBTT_TargetClosestCreatureWithLantern::UBTT_TargetClosestCreatureWithLantern() {
    this->OfRelationship = EAIRelationship::Hostile;
    this->bLanternMustBeDrawn = true;
    this->bLanternMustBeActive = true;
    this->bFailOnNoTargetSwap = true;
}

