#include "AICombatTargetFilter.h"

UAICombatTargetFilter::UAICombatTargetFilter() {
    this->ZDifferenceWeighting = 4.00f;
    this->RetargetBlockConeHalfAngle = 20.00f;
    this->RetargetBlockMinSeperation = 100.00f;
    this->RetargetMinTime = 3.00f;
    this->RetargetTimerTurnSlow = 0.00f;
    this->DamageAgroDumpTime = 8.00f;
    this->DamageAgroFixate = 2.00f;
    this->MyCreature = NULL;
    this->CurrentDesired = NULL;
}

