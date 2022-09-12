#include "AshenAICombatComponent.h"

class UAshenAnimMetronomeNotify;

bool UAshenAICombatComponent::UpdateCombat(float Delta) {
    return false;
}

void UAshenAICombatComponent::ResetAICombat() {
}

void UAshenAICombatComponent::OnPostSpawn() {
}

void UAshenAICombatComponent::OnMetronome(const UAshenAnimMetronomeNotify* MetronomeNotify) {
}

void UAshenAICombatComponent::OnDamageTaken(const FAshenDamage& Damage) {
}

EAICombatDesire UAshenAICombatComponent::GetCurrentCombatDesire() const {
    return EAICombatDesire::None;
}

UAshenAICombatComponent::UAshenAICombatComponent() {
    this->StrategyPointsCurrent = 0.00f;
    this->StrategyPointsCap = 0.00f;
    this->StrategyPointsOnDamageTaken = 0.00f;
    this->StrategyPointsOnDamageDealt = 0.00f;
    this->StrategyPointsOverTime = 0.00f;
    this->MinWeaponSwapTime = 5.00f;
    this->MeleeZone = 375.00f;
    this->EncounterZone = 1000.00f;
    this->ChaosUpdateTick = 1.00f;
    this->MoveShieldBlockSafeStaminaPercentage = 0.40f;
    this->BackCastRange = 0.00f;
    this->EvadeIncorrectAngleScore = 0.01f;
    this->EvadeCorrectAngleScore = 20.00f;
    this->EvadeCorrectDistanceScore = 10.00f;
    this->EvadeUnderDistancePenaltyScore = 0.25f;
    this->CombatBehaviourTree = NULL;
    this->FleeCombatBehaviourTree = NULL;
    this->NavQueryFilter_Destination = NULL;
    this->NavQueryFilter_Move = NULL;
    this->CombatTargetFilterClass = NULL;
    this->MyCreature = NULL;
    this->MyHumanoid = NULL;
    this->OwnerVitals = NULL;
    this->OwnerPerception = NULL;
    this->CurrentOrder = NULL;
    this->CombatTargetFilter = NULL;
    this->CurrentDesiredAttack = NULL;
    this->CurrentDesiredCounterAttack = NULL;
    this->CurrentDesiredWeapon = NULL;
    this->LastAttack = NULL;
}

