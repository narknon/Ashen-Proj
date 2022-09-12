#include "AttackDescription.h"

FAttackDescription::FAttackDescription() {
    this->Damage = 0.00f;
    this->Bleed = 0.00f;
    this->CritDamageMultiplier = 0.00f;
    this->Stagger = 0.00f;
    this->PoiseDamage = 0.00f;
    this->ChargeDamageMultiplier = 0.00f;
    this->ChargePoiseDamageMultiplier = 0.00f;
    this->ChargeStaminaCostToBlockMultiplier = 0.00f;
    this->MaxStunEffect = EMaxStunEffect::None;
    this->PushStrength = 0.00f;
    this->ChargePushStrengthMultiplier = 0.00f;
    this->StaminaCostToAttack = 0.00f;
    this->IsThrowAttack = false;
    this->StaminaCostToBlock = 0.00f;
    this->bAttackCanReboundOffShields = false;
    this->CanAttackWhileBlocking = false;
    this->Type = EAttackType::Undefined;
    this->HeroHitCameraEffect = ECameraEffect::None;
    this->UseFeedbackInput = EFeedbackInput::None;
    this->WooshAudioEvent = NULL;
    this->BleedAudioEvent = NULL;
    this->WeaponFullyChargedEffect = NULL;
    this->WeaponFullyChargedEffectFierceTalisman = NULL;
    this->FullyChargedHitEffect = NULL;
    this->WeaponStunEffect = NULL;
    this->AttackReach = 0.00f;
    this->CanAttackLoop = false;
    this->StartWithLoop = false;
    this->IgnoreHitEffects = false;
    this->AttackStartMontage = NULL;
}

