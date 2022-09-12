#include "VitalAttributes.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UVitalAttributes::UpdateStamina(float Delta, EStaminaDrainType DrainType) {
}

void UVitalAttributes::UpdatePoiseEffects(FAshenDamage& Damage) {
}

void UVitalAttributes::UpdateHealthFromBleed(float Delta) {
}

void UVitalAttributes::UpdateHealth(float Delta, EAshenDamageType DamageType, AActor* Source) {
}

void UVitalAttributes::SetUnkillable(bool bEnable) {
}

void UVitalAttributes::SetMaxPoise(float NewPoise) {
}

void UVitalAttributes::Set(float Health, float Stamina) {
}

void UVitalAttributes::ResetPoise() {
}

void UVitalAttributes::Reset() {
}

void UVitalAttributes::ReGenPoise(float DeltaTime) {
}

bool UVitalAttributes::IsUnkillable() const {
    return false;
}

bool UVitalAttributes::IsStunned() {
    return false;
}

bool UVitalAttributes::IsStaminaGreaterThanZero() const {
    return false;
}

bool UVitalAttributes::IsStaggered() {
    return false;
}

bool UVitalAttributes::IsPoiseImmune() const {
    return false;
}

bool UVitalAttributes::IsPoiseDisabled() const {
    return false;
}

bool UVitalAttributes::IsKnockedDown() {
    return false;
}

bool UVitalAttributes::IsAlive() const {
    return false;
}

bool UVitalAttributes::HasDied() const {
    return false;
}

float UVitalAttributes::GetStaminaPercentage() const {
    return 0.0f;
}

float UVitalAttributes::GetRescueHealthAmount() const {
    return 0.0f;
}

float UVitalAttributes::GetRegainHealthPercentage() const {
    return 0.0f;
}

float UVitalAttributes::GetPoiseImmuneTimer() const {
    return 0.0f;
}

float UVitalAttributes::GetMaxStaminaPercentage() const {
    return 0.0f;
}

float UVitalAttributes::GetMaxPoise() const {
    return 0.0f;
}

float UVitalAttributes::GetLockonBarHealthPercentage() const {
    return 0.0f;
}

float UVitalAttributes::GetLastStaminaPercentage() const {
    return 0.0f;
}

float UVitalAttributes::GetLastHealthPercentage() const {
    return 0.0f;
}

float UVitalAttributes::GetHealthPercentage() const {
    return 0.0f;
}

float UVitalAttributes::GetBleedPercentage() const {
    return 0.0f;
}

float UVitalAttributes::GetBasePoise() const {
    return 0.0f;
}

void UVitalAttributes::EnablePoise() {
}

void UVitalAttributes::DisablePoise() {
}

void UVitalAttributes::ApplyBleed(float _damage) {
}

void UVitalAttributes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVitalAttributes, CurrentHealth);
    DOREPLIFETIME(UVitalAttributes, bUnkillable);
}

UVitalAttributes::UVitalAttributes() {
    this->MaxHealth = 100.00f;
    this->MultiplayerHealthScale = 1.50f;
    this->bAlwaysScaleHealthForMultiplayer = false;
    this->bAlwaysDescaleHealthForMultiplayer = false;
    this->BaseMaxStamina = 100.00f;
    this->DerivedMaxStamina = 0.00f;
    this->MinStamina = 0.00f;
    this->StaminaPercentageDrainPerUnit = 0.00f;
    this->StaminaDrainPerMinute = 0.00f;
    this->BleedReduction = 0.00f;
    this->CurrentHealth = 0.00f;
    this->CurrentRegainHealth = 0.00f;
    this->RegainHealthDrainPerSecond = 0.40f;
    this->LastHealth = 0.00f;
    this->CurrentStamina = 0.00f;
    this->CurrentMaxStamina = 0.00f;
    this->LastStamina = 0.00f;
    this->CurrentPoise = 0.00f;
    this->MaxPoise = 50.00f;
    this->PoiseRegenerationDelay = 4.00f;
    this->PoiseRegenerationTimer = 0.00f;
    this->PoiseRegenerationRate = 15.00f;
    this->PoiseStaggerThreshold = 150.00f;
    this->PoiseStunThreshold = 75.00f;
    this->PoiseKnockdownThreshold = 25.00f;
    this->PoiseInvulnerabilityTimePostStagger = 0.10f;
    this->PoiseInvulnerabilityTimePostStun = 0.10f;
    this->PoiseInvulnerabilityTimePostKnockdown = 0.10f;
    this->PoiseDamageThresholdToIgnorePoiseInvulnerability = 50.00f;
    this->StaggerDuration = 0.50f;
    this->StunDuration = 1.67f;
    this->KnockdownDuration = 2.00f;
    this->StunImmunityTimer = 0.00f;
    this->StunImmunityTime = 3.00f;
    this->StaminaRegenerationTimer = 0.00f;
    this->bExcessStaminaDrainCostsHealth = false;
    this->StaminaRegenerationDelay = 0.00f;
    this->StaminaRegenerationPerSecond = 0.00f;
    this->MinPassiveStaminaDrainLimit = 25.00f;
    this->MaxStaminaDrainMultiplier = 0.12f;
    this->StaminaHeathDrainMultiplier = 0.25f;
    this->RescueHealthPercentage = 0.50f;
    this->ProjectileDamageMultiplier = 1.00f;
    this->ProjectilePoiseMultiplier = 1.00f;
    this->bIsStaggered = false;
    this->bUnkillable = false;
    this->Creature = NULL;
    this->Humanoid = NULL;
}

