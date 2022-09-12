#include "AshenAICommanderComponent.h"

void UAshenAICommanderComponent::UpdateCommander(float Delta) {
}

void UAshenAICommanderComponent::OnPostSpawn() {
}

void UAshenAICommanderComponent::OnDamageTaken(const FAshenDamage& Damage) {
}

UAshenAICommanderComponent::UAshenAICommanderComponent() {
    this->MyCreature = NULL;
    this->DesiredCommand = NULL;
    this->OwnerVitals = NULL;
    this->OwnerCombat = NULL;
}

