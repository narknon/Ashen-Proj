#include "ItemWeapon.h"
#include "OldWeaponAttackAction.h"

class UParticleSystem;
class ACreature;

void UItemWeapon::Tick(float DeltaSeconds) {
}

void UItemWeapon::SetupAttackData() {
}

void UItemWeapon::PlayHitFlashEffect(UParticleSystem* EffectsSystem, FVector HitLoc) {
}

void UItemWeapon::PlayBloodTrailEffect(UParticleSystem* EffectsSystem) {
}

void UItemWeapon::GetWeaponUIValues(ACreature* Source, float& Light_Current, float& Heavy_Current, float& Light_Upgraded, float& Heavy_Upgraded, float& PoiseLight, float& PoiseHeavy, float& PoiseLUp, float& PoiseHUp, float CritConst, float& CritCurrent, float& CritUp) {
}

FAttackDescription UItemWeapon::GetRandomComboAttack() {
    return FAttackDescription{};
}

TArray<FUIStatBarData> UItemWeapon::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

void UItemWeapon::FullyCharged(UParticleSystem* EffectChargeUpComplete) {
}

void UItemWeapon::EnableWeaponCollision(const FAttackDescription& AttackDescription) {
}

void UItemWeapon::EnableStunEffect(const FAttackDescription& UseAttackDescription) {
}

void UItemWeapon::DisableWeaponCollision() {
}

void UItemWeapon::DisableStunEffect() {
}

void UItemWeapon::CanWeaponAttack(bool& _b) {
}

UItemWeapon::UItemWeapon() {
    this->TierModifiers.AddDefaulted(4);
    this->bHasLightAttack = false;
    this->bHasHeavyAttack = false;
    this->bHasRollAttack = false;
    this->bHasSprintAttack = false;
    this->bHasPlungingAttack = false;
    this->bHasComboAttacks = false;
    this->WeaponAttackSet = NULL;
    this->AttackClass = AOldWeaponAttackAction::StaticClass();
    this->UseProjectile = NULL;
    this->bTwoHanded = false;
    this->bForceSingleHandedLocomotion = false;
    this->AttackAnimRateScale = 1.00f;
    this->ChargeTimer = 0.00f;
}

