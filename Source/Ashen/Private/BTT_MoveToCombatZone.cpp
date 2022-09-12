#include "BTT_MoveToCombatZone.h"

UBTT_MoveToCombatZone::UBTT_MoveToCombatZone() {
    this->CombatZone = EAICombatZone::Melee;
    this->bInverseTargetConeDirection = false;
    this->TargetConeHalfAngle = 30.00f;
    this->bUpdateTargetLocationOnTick = true;
    this->UpdateTargetLocationOnTickInterval = 0.50f;
    this->UpdateTargetLocationOnTickRange = 25.00f;
}

