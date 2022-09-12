#include "Explosive.h"

void AExplosive::DetonateOverride(float UseRadius, float UseDamage) {
}

void AExplosive::Detonate() {
}

AExplosive::AExplosive() {
    this->Radius = 0.00f;
    this->Damage = 0.00f;
    this->PoiseDamage = 0.00f;
    this->MaxStunEffect = EMaxStunEffect::None;
    this->ExplosionEffect = NULL;
    this->SoundCue = NULL;
}

