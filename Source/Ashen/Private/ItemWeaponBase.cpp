#include "ItemWeaponBase.h"

void UItemWeaponBase::SetDirection(EAttackDirection NewSetDirection) {
}

TArray<FUIStatBarData> UItemWeaponBase::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemWeaponBase::UItemWeaponBase() {
    this->CriticalHitChanceConstant = 0.00f;
    this->UICriticalHitChance = 0.00f;
    this->Direction = EAttackDirection::None;
    this->RotationScale = 1.00f;
    this->bUseHeavyDamageEffects = false;
    this->bAllowWeaponWorldHit = false;
    this->bUseFullyChargedTrail = false;
    this->bUseHeavyWorldHit = false;
    this->GroundImpactAudioEvent = NULL;
    this->PhysicalMaterialDataTable = NULL;
    this->FxHitResponseType = EDamageEffectType::None;
    this->WorldHitTraceSize = 16.00f;
    this->bIsExplosive = false;
    this->bExplosiveForMeleeHits = false;
    this->ExplosiveActor = NULL;
    this->DefaultWeaponTrailSwing = NULL;
    this->WeaponPassiveEffectsTier1 = NULL;
    this->WeaponPassiveEffectsTier2 = NULL;
    this->WeaponPassiveEffectsTier3 = NULL;
    this->WeaponTrailSwingTier1 = NULL;
    this->WeaponTrailSwingTier2 = NULL;
    this->WeaponTrailSwingTier3 = NULL;
    this->WeaponTrailSwingChargedTier1 = NULL;
    this->WeaponTrailSwingChargedTier2 = NULL;
    this->WeaponTrailSwingChargedTier3 = NULL;
}

