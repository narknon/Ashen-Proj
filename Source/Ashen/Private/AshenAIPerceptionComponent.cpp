#include "AshenAIPerceptionComponent.h"

class UPerceivedCreature;
class UAnimMontage;
class ACreature;
class AActor;
class UVitalAttributes;

void UAshenAIPerceptionComponent::UpdatePerception() {
}

bool UAshenAIPerceptionComponent::PeekAtCreature(UPerceivedCreature* PeekCreature, bool bTraceOnly, const FVector& PeekConeDirection, const FVector& PeekOffset, float PeekConeLength, float PeekConeHalfAngle) {
    return false;
}

void UAshenAIPerceptionComponent::OnEmotePerceived(ACreature* Creature, UAnimMontage* Emote) {
}

void UAshenAIPerceptionComponent::OnDeath(AActor* Parent, UVitalAttributes* Source) {
}

void UAshenAIPerceptionComponent::OnDamageTaken(const FAshenDamage& Damage) {
}

void UAshenAIPerceptionComponent::OnDamagePerceived(const FAshenDamage& Damage) {
}

void UAshenAIPerceptionComponent::OnAttackPerceived(ACreature* Creature) {
}

void UAshenAIPerceptionComponent::GetPerceivedHostiles(TArray<TWeakObjectPtr<UPerceivedCreature>>& Hostiles) const {
}

TArray<UPerceivedCreature*> UAshenAIPerceptionComponent::GetPerceivedCreatures() const {
    return TArray<UPerceivedCreature*>();
}

TWeakObjectPtr<UPerceivedCreature> UAshenAIPerceptionComponent::GetPerceivedCreature(const ACreature* Creature) const {
    return NULL;
}

void UAshenAIPerceptionComponent::GetPerceivedAllies(TArray<TWeakObjectPtr<UPerceivedCreature>>& Allies) const {
}

bool UAshenAIPerceptionComponent::DoesPerceiveAnyHostileHero() const {
    return false;
}

UAshenAIPerceptionComponent::UAshenAIPerceptionComponent() {
    this->SphereRadius = 2000.00f;
    this->LOSConeLength = 1200.00f;
    this->LOSConeHalfAngle = 60.00f;
    this->LOSPeripheralConeLength = 400.00f;
    this->LOSPeripheralConeHalfAngle = 90.00f;
    this->RetainLostPerceivedTimer = 15.00f;
    this->RetainForcedPerceivedTimer = 10.00f;
    this->RetainLostPerceivedMaxDistance = 5000.00f;
    this->EmotingAtUsConeHalfAngle = 60.00f;
    this->bOnlyPerceiveHero = false;
    this->bOnlyPerceiveAIInMyGroup = false;
    this->bCanPerceiveDeadCreatures = false;
    this->bCanSeeThroughWalls = false;
    this->LocationMinDistanceForNewLoSCheck = 25.00f;
    this->MyCreature = NULL;
    this->MyHeroFollower = NULL;
}

