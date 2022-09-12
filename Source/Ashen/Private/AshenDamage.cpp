#include "AshenDamage.h"

FAshenDamage::FAshenDamage() {
    this->ProjectileSource = NULL;
    this->HeroHitCameraEffect = ECameraEffect::None;
    this->DamageClass = EAshenDamageType::None;
    this->Damage = 0.00f;
    this->DamageEffectType = EDamageEffectType::None;
    this->TestSampleQuality = EItemQuality::Tier0;
    this->Bleed = 0;
    this->PoiseDamage = 0;
    this->PushStrength = 0.00f;
    this->MaxStunEffect = EMaxStunEffect::None;
    this->EffectsProfileIndex = 0;
    this->bReboundsOffShields = false;
    this->StaminaCostToBlock = 0.00f;
    this->IsBlocking = false;
    this->IsBackstab = false;
    this->AttackType = EAttackType::Undefined;
    this->Critical = false;
    this->MaxDamageFreezeTime = 0.00f;
    this->bRefreshFreezeTime = false;
    this->bReplicateFreeze = false;
    this->IgnoreHitEffects = false;
    this->bIgnoreAllDamageReduction = false;
    this->HitNumber = 0;
}

