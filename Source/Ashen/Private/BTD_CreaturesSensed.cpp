#include "BTD_CreaturesSensed.h"

UBTD_CreaturesSensed::UBTD_CreaturesSensed() {
    this->OfRelationship = EAIRelationship::Hostile;
    this->MinLevel = EAIPerceptionSense::Low;
    this->bIncludeDeadCreatures = false;
}

