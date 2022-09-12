#include "AshStatue.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/CapsuleComponent.h"

AAshStatue::AAshStatue() {
    this->PoseableMeshComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("PoseableMeshComponent"));
    this->CollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComponent"));
    this->DisintegrateParticles = NULL;
    this->DisintegrateRate = 2.00f;
}

