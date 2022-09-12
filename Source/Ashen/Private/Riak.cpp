#include "Riak.h"
#include "Components/SkeletalMeshComponent.h"

bool ARiak::ShouldStartFight() const {
    return false;
}

void ARiak::OnPhaseTwoStart_Implementation() {
}

void ARiak::OnPhaseTransition_Authority_Implementation() {
}

void ARiak::OnPhaseOneStart_Implementation() {
}

void ARiak::OnLifeSteal_Implementation() {
}

bool ARiak::GetUsing2HandedWeapon() const {
    return false;
}

ARiak::ARiak() {
    this->IntroLoopMontage = NULL;
    this->PhaseTransitionSequence = NULL;
    this->LifeStealParticles = NULL;
    this->PhaseOneHelm = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PhaseOneHelm"));
    this->LifeStealPercentage = 0.10f;
    this->PhaseTransitionHealthPercentage = 0.50f;
}

