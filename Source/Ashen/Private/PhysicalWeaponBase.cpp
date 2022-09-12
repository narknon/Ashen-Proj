#include "PhysicalWeaponBase.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"

class UMaterialInstanceDynamic;


void APhysicalWeaponBase::SetWeaponTierEffects(EItemQuality Tier) {
}

void APhysicalWeaponBase::PlayModifierHitEffects(EItemQuality Tier, const FVector& HitLoc) {
}

UMaterialInstanceDynamic* APhysicalWeaponBase::GetDynamicMaterialInstance() {
    return NULL;
}

void APhysicalWeaponBase::DeactivateWeaponTrail() {
}

void APhysicalWeaponBase::ActivateWeaponTrail(bool bUseFullyChargedTrail) {
}

APhysicalWeaponBase::APhysicalWeaponBase() {
    this->AttackTrailAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("AttackTrailAttachment"));
    this->AttackHitLocation = CreateDefaultSubobject<USceneComponent>(TEXT("AttackHitLocation"));
    this->AttackTrailFx = NULL;
    this->DefaultAttackTrailFx = NULL;
    this->WeaponTierPassiveFx = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PassiveTierEffect"));
    this->MaterialEffectsInstance = NULL;
}

