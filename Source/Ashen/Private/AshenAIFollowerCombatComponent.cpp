#include "AshenAIFollowerCombatComponent.h"

bool UAshenAIFollowerCombatComponent::UpdateCombat(float Delta) {
    return false;
}

UAshenAIFollowerCombatComponent::UAshenAIFollowerCombatComponent() {
    this->RollOverEvadeChance = 0.67f;
    this->BossAIThreatHoldAttacksCap = 0.50f;
    this->BossAIThreatDodgeCap = 0.80f;
    this->BossAIThreatHealCap = 0.50f;
    this->ElderDark_ThreatCautionHealthThreshold = 0.50f;
    this->Matriarch_ThreatCautionHealthThreshold = 0.75f;
    this->SoG_ThreatCautionHealthThreshold = 0.75f;
    this->Outcast_ThreatCautionHealthThreshold = 0.50f;
    this->Sissna_ThreatCautionHealthThreshold = 0.75f;
    this->Garoran_ThreatCautionHealthThreshold = 0.50f;
    this->Riak_ThreatCautionHealthThreshold = 0.75f;
    this->ElderDark_ReserveDodgeStamina = 0.00f;
    this->Matriarch_ReserveDodgeStamina = 1.00f;
    this->SoG_ReserveDodgeStamina = 1.00f;
    this->Outcast_ReserveDodgeStamina = 1.00f;
    this->Sissna_ReserveDodgeStamina = 1.00f;
    this->Garoran_ReserveDodgeStamina = 1.00f;
    this->Riak_ReserveDodgeStamina = 1.00f;
    this->BossAIThreatLevelAnimCurve = TEXT("boss_ai_threat");
    this->BossAIThreatAttackRangeAnimCurve = TEXT("boss_ai_threat_range");
    this->BossAIThreatAttackHalfAngleAnimCurve = TEXT("boss_ai_threat_cone");
    this->BossAIThreatAttackFacingAnimCurve = TEXT("boss_ai_threat_angle");
    this->CurrentDesiredFollowerWeapon = NULL;
    this->MyFollower = NULL;
}

