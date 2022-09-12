#include "AIRelationshipEscalateRules.h"

FAIRelationshipEscalateRules::FAIRelationshipEscalateRules() {
    this->OnEncounterThreatBehaviourTree = NULL;
    this->bAutoEscalateOnWeaponDrawn = false;
    this->bAutoEscalateOnAttackAction = false;
    this->AutoEscalateOnDistance = 0.00f;
    this->MinEscalateDistance = 0.00f;
    this->MinEscalateTime = 0.00f;
    this->WeaponEquippedEscalateMod = 0.00f;
    this->bCanDeescalteWithWeaponEquipped = false;
    this->WeaponEquippedDeescalteMod = 0.00f;
    this->DeescalateAfterTime = 0.00f;
}

