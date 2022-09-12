#include "AshenAIPathFollowingComponent.h"
#include "Components/SplineComponent.h"

UAshenAIPathFollowingComponent::UAshenAIPathFollowingComponent() {
    this->Creature = NULL;
    this->MyController = NULL;
    this->Avoidence = NULL;
    this->AshenMoveComp = NULL;
    this->PathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
}

