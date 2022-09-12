#include "ShadowFiendEffect.h"

class ACreature;




void AShadowFiendEffect::Setup(ACreature* _Source, ACreature* _FinalLocation, float _DamageAmount, bool _ApplysDamage) {
}

void AShadowFiendEffect::SetTargetDamage(ACreature* _FinalLocation, float _DamageAmount, bool _ApplysDamage) {
}

void AShadowFiendEffect::Play() {
}


void AShadowFiendEffect::ApplyDamage() {
}

AShadowFiendEffect::AShadowFiendEffect() {
    this->Velocity = 0.00f;
    this->ArcTime = 0.00f;
    this->ArcSizeMax = 0.00f;
    this->ArcSizeMin = 0.00f;
    this->DelayBeforeDeletion = 0.00f;
    this->VelocityModOverTime = NULL;
    this->WeaponTypeSwitchState = TEXT("Relic_Shadowfiend");
    this->GameState = NULL;
    this->ArcSize = 0.00f;
    this->ArcFraction = 0.00f;
    this->Running = false;
    this->AnimationTimer = 0.00f;
    this->DeleteTimer = 0.00f;
    this->DeletePending = false;
    this->ApplysDamage = false;
    this->DamageAmount = 0.00f;
}

