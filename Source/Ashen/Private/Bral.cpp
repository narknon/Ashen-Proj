#include "Bral.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ABral::ABral() {
    this->LeapCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeapCollision"));
    this->RightFistCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RightFistCollision"));
    this->RightFistTrailAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("RightFistTrailAttachment"));
    this->LeftFistCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftFistCollision"));
    this->LeftFistTrailAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("LeftFistTrailAttachment"));
    this->CliffIdleMontage = NULL;
    this->CliffClimbMontage = NULL;
}

