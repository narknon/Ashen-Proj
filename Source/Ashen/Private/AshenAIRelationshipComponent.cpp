#include "AshenAIRelationshipComponent.h"

void UAshenAIRelationshipComponent::OnPostSpawn() {
}

void UAshenAIRelationshipComponent::OnDamageTaken(const FAshenDamage& Damage) {
}

UAshenAIRelationshipComponent::UAshenAIRelationshipComponent() {
    this->MyFaction = EAIFaction::Undefined;
    this->MyFactionRelationship = EAIRelationship::Hostile;
    this->PlayerRelationship = EAIRelationship::Hostile;
    this->IgnoreFriendlyPlayerHits = 1;
    this->OnEncounterFriendlyBehaviourTree = NULL;
    this->ForceWakeOnDamageTaken = 5.00f;
    this->bSkipRelationshipChangeAnimation = false;
    this->bMirrorRelationsToCreatures = false;
    this->bTreatNonCombatantsAsFriends = false;
    this->bLockRelationChanges = false;
    this->MyCreature = NULL;
}

