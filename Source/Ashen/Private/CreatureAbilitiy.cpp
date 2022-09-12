#include "CreatureAbilitiy.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/CapsuleComponent.h"

class ACreature;
class AActor;

void ACreatureAbilitiy::SetCreatureOwner(ACreature* CreatureOwner) {
}

void ACreatureAbilitiy::OnActorEndAbilityOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACreatureAbilitiy::OnActorAbilityOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACreatureAbilitiy::EnableAbilityCollision() {
}

void ACreatureAbilitiy::DisableAbilityCollision() {
}

bool ACreatureAbilitiy::CalculateTargetDistance() {
    return false;
}

ACreatureAbilitiy::ACreatureAbilitiy() {
    this->AbilityRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AbilityRoot"));
    this->AbilityCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AbilityCollision"));
    this->AbilityEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AbilityEffect"));
    this->DamageCurve = NULL;
    this->NetworkActorSource = NULL;
    this->bDoDistanceCheck = false;
    this->bResetTimerOnActivation = false;
    this->DamageTimeThreshold = NULL;
    this->bDoConstantOverlap = false;
    this->ConstantOverlapFrequency = 0.00f;
    this->Creature = NULL;
    this->TimeAlive = 0.00f;
    this->bCollisionActivated = false;
    this->HitActor = NULL;
}

