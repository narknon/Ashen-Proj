#include "IntrinsicAttackAction.h"

AIntrinsicAttackAction::AIntrinsicAttackAction() {
    this->ReboundCounter = 0;
    this->AllowCombatRotationCounter = 0;
    this->NumberOfHits = 0;
    this->MultipleOverlapWeaponEnabledCount = 0;
    this->MultipleOverlapWeaponHit = false;
    this->TargetCreature = NULL;
}

