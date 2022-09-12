#include "BuffEffect.h"

class UHeroVitalAttributes;
class AHero;

void UBuffEffect::SetActive(bool bActive) {
}

void UBuffEffect::OnTickEffect_Implementation(float DeltaSeconds) {
}

void UBuffEffect::OnEffectStarted_Implementation() {
}

void UBuffEffect::OnEffectEnded_Implementation() {
}

bool UBuffEffect::IsExpired() const {
    return false;
}

bool UBuffEffect::IsActive() const {
    return false;
}

EBuffType UBuffEffect::GetType() {
    return EBuffType::Food;
}

float UBuffEffect::GetStaminaRegenModifier_Implementation() {
    return 0.0f;
}

float UBuffEffect::GetStaminaChangeModifier_Implementation(EStaminaDrainType DrainType, float StaminaDelta) {
    return 0.0f;
}

UHeroVitalAttributes* UBuffEffect::GetHeroVitalAttributes() const {
    return NULL;
}

AHero* UBuffEffect::GetHero() const {
    return NULL;
}

float UBuffEffect::GetHealthChangeModifier_Implementation(EAshenDamageType DamageType, float HealthDelta) {
    return 0.0f;
}

void UBuffEffect::GetBuffUIBars(TArray<FUIStatBarData>& Bars, EItemQuality Quality) {
}


UBuffEffect::UBuffEffect() {
    this->EffectDuration = 0.00f;
    this->EffectValue = 0.00f;
    this->bExpires = true;
    this->bIsHealing = false;
    this->bAffectsStamina = false;
    this->AudioEvent = NULL;
    this->ParticleEffect = NULL;
    this->UsagePostProcessEffect = EPostProcessEffect::Unassigned;
    this->ParticleComponent = NULL;
}

