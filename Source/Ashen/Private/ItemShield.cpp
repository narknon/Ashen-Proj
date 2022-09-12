#include "ItemShield.h"

float UItemShield::GetStaminaRegenModifier() const {
    return 0.0f;
}

float UItemShield::GetStaminaMitgation() const {
    return 0.0f;
}

float UItemShield::GetPoiseValue() const {
    return 0.0f;
}

float UItemShield::GetPoiseReboundThreshold() const {
    return 0.0f;
}

float UItemShield::GetPoiseMitigationValue() const {
    return 0.0f;
}

TArray<FUIStatBarData> UItemShield::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

float UItemShield::GetBlockArc() const {
    return 0.0f;
}

UItemShield::UItemShield() {
    this->PoiseValue = 20.00f;
    this->PoiseMitigation = 30.00f;
    this->PoiseReboundThreshold = 0.00f;
    this->StaminaMitigation = 30.00f;
    this->StaminaRegenModifier = 0.25f;
    this->BlockArcDegrees = 150.00f;
    this->OnBlockedFX = NULL;
    this->ImpactAudioEvent = NULL;
}

