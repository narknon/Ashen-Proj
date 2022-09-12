#include "BTT_TurnToClosestCreature.h"

UBTT_TurnToClosestCreature::UBTT_TurnToClosestCreature() {
    this->OfRelationship = EAIRelationship::Hostile;
    this->bMustBeVisible = true;
    this->bMustBeDiscovered = true;
}

