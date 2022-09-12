#include "CreatureAbilityDescription.h"

FCreatureAbilityDescription::FCreatureAbilityDescription() {
    this->Damage = 0;
    this->Bleed = 0;
    this->Stagger = 0;
    this->PoiseDamage = 0;
    this->DamageType = EAshenDamageType::None;
    this->MaxStunEffect = EMaxStunEffect::None;
    this->StaminaCostToAttack = 0.00f;
    this->StaminaCostToBlock = 0.00f;
    this->CanAttackWhileBlocking = false;
    this->AnimateOnDamage = false;
    this->Type = EAttackType::Undefined;
    this->DamageEffectType = EDamageEffectType::None;
    this->HeroHitCameraEffect = ECameraEffect::None;
    this->EffectsProfileIndex = 0;
}

