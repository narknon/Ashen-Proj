#include "BTD_CreaturesSighted.h"

UBTD_CreaturesSighted::UBTD_CreaturesSighted() {
    this->OfRelationship = EAIRelationship::Hostile;
    this->TimeSinceLostSightMax = 0.00f;
    this->bIncludeDeadCreatures = false;
}

