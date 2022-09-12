#include "HeroVitalAttributes.h"
#include "Net/UnrealNetwork.h"

void UHeroVitalAttributes::UpdateMaxStaminaCap(float Delta, bool IsPercentageChange) {
}

void UHeroVitalAttributes::UpdateMaxStamina(float Delta) {
}

void UHeroVitalAttributes::UpdateMaxHealth(float Delta, bool IsPercentageChange, EAshenDamageType DamageType, bool KeepCurrentHealthRatio) {
}

bool UHeroVitalAttributes::StaminaCostCheck(float StaminaCost, bool bPlaySoundOnFail) {
    return false;
}

void UHeroVitalAttributes::ResetNoStaminaAudioLock() {
}

void UHeroVitalAttributes::IncreaseTemporaryMaxStamina(float Increase) {
}

void UHeroVitalAttributes::IncreaseStaminaRegenRatePermanently(float Increase) {
}

void UHeroVitalAttributes::IncreaseMaxStaminaPermanently(float Increase, bool bFromQuestReward, float RewardDelay) {
}

void UHeroVitalAttributes::IncreaseMaxHealthPermanently(float Increase, bool bFromQuestReward, float RewardDelay) {
}

bool UHeroVitalAttributes::HasSecoundLife_UICheck(bool& HasAshwraithRespawn) {
    return false;
}

void UHeroVitalAttributes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHeroVitalAttributes, bHasBeenDownedSinceLastRest);
}

UHeroVitalAttributes::UHeroVitalAttributes() {
    this->bDontScaleHealthFromSave = false;
    this->MaxHealthMultiplier = 1.00f;
    this->MaxStaminaMultiplier = 1.00f;
    this->UIValueMultiplier = 1.00f;
    this->SaveStoneReplenishParticleSystem = NULL;
    this->SaveStoneReplenishAudioEvent = NULL;
    this->Hero = NULL;
    this->bGodMode = false;
    this->bStaminaKing = false;
    this->FailedStaminaCheckSoundEvent = NULL;
    this->bHasBeenDownedSinceLastRest = false;
    this->HardcoreModeBaseHealth = 50.00f;
    this->HardcoreModeBaseStamina = 50.00f;
    this->HardcoreModeHealthIncreaseModifier = 0.50f;
    this->HardcoreModeStaminaIncreaseModifier = 0.50f;
}

