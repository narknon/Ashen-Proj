#include "AICombatDesireWeightSet.h"

FAICombatDesireWeightSet::FAICombatDesireWeightSet() {
    this->BaseWeight = 0.00f;
    this->HealthWeight = 0.00f;
    this->InverseHealthWeight = 0.00f;
    this->StaminaWeight = 0.00f;
    this->InverseStaminaWeight = 0.00f;
    this->CloseHostilesWeight = 0.00f;
    this->FarHostilesWeight = 0.00f;
    this->HostilesTargetingUsWeight = 0.00f;
    this->TargetVulnerabilityWeight = 0.00f;
    this->BackToWallWeight = 0.00f;
    this->TargetMovingTowardsUs = 0.00f;
    this->TargetMovingAwayFromUs = 0.00f;
    this->TargetMovingStrafingUs = 0.00f;
    this->TargetMovingStrafingUsAbsolute = 0.00f;
    this->AttacksIncomingWeight = 0.00f;
    this->CombatDurationWeight = 0.00f;
    this->InverseCombatDurationWeight = 0.00f;
    this->CombatDurationTimeSecondsCap = 0.00f;
    this->AttackValidForTimeWeight = 0.00f;
    this->ChaosWeight = 0.00f;
}

