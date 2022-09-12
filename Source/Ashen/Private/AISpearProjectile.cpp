#include "AISpearProjectile.h"

void AAISpearProjectile::OnExplosion_Implementation(const FVector& AtLocation) {
}

AAISpearProjectile::AAISpearProjectile() {
    this->bExplosionAllowFriendlyFire = false;
    this->bExplosionCanHitSelf = false;
    this->bExplodeOnCreatureContact = false;
    this->bExplosionDestroysSelf = false;
    this->bExplodeOnFadeOut = false;
    this->ExplosionRadius = 0.00f;
    this->ExplosionDamage = 0.00f;
    this->ExplosionPoise = 0.00f;
    this->ExplosionPush = 0.00f;
    this->ExplosionStaminaCostToBlock = 0.00f;
    this->ExplosionHeroHitCameraEffect = ECameraEffect::Shake;
    this->ExplosionMaxStunEffect = EMaxStunEffect::Stun;
    this->ExplosionEffect = NULL;
    this->bOffsetMeshOnSpawn = true;
    this->bLerpRotateToVelocity = false;
    this->LerpRotateToVelocityOverTime = 1.00f;
    this->MyWeapon = NULL;
    this->MyCreature = NULL;
    this->MyTarget = NULL;
}

