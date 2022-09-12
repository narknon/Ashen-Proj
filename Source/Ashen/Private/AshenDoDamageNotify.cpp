#include "AshenDoDamageNotify.h"


UAshenDoDamageNotify::UAshenDoDamageNotify() {
    this->Radius = 100.00f;
    this->bUseAttackDamageDescription = true;
    this->bCreateAtActorFeet = false;
    this->bAllowFriendlyFire = false;
    this->Damage = 1.00f;
    this->Poise = 1.00f;
    this->Push = 1.00f;
    this->StaminaCostToBlock = 0.00f;
    this->HeroHitCameraEffect = ECameraEffect::None;
    this->MaxStunEffect = EMaxStunEffect::None;
    this->NotifyTriggerWeight = 0.00f;
}

