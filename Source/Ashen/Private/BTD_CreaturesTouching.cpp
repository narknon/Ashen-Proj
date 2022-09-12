#include "BTD_CreaturesTouching.h"

UBTD_CreaturesTouching::UBTD_CreaturesTouching() {
    this->OfRelationship = EAIRelationship::Hostile;
    this->bIncludeDeadCreatures = false;
    this->TouchAllowance = 10.00f;
}

