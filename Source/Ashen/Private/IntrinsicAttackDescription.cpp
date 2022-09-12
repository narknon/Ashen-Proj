#include "IntrinsicAttackDescription.h"

FIntrinsicAttackDescription::FIntrinsicAttackDescription() {
    this->ActionClass = NULL;
    this->Damage = 0;
    this->Bleed = 0;
    this->Stagger = 0;
    this->PoiseDamage = 0;
    this->MaxStunEffect = EMaxStunEffect::None;
    this->StaminaCostToAttack = 0.00f;
    this->StaminaCostToBlock = 0.00f;
    this->CanRebound = false;
    this->CanDamageInterrupt = false;
    this->Range = 0.00f;
    this->Type = EAttackType::Undefined;
    this->HeroHitCameraEffect = ECameraEffect::None;
    this->WooshAudioEvent = NULL;
    this->TrailEffect = NULL;
    this->IgnoreHitEffects = false;
}

