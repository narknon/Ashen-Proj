#include "Roamer.h"
#include "Components/BoxComponent.h"

ARoamer::ARoamer() {
    this->HeadCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("HeadCollision"));
    this->BackLeftLegCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BackLeftLegCollision"));
    this->BackRightLegCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BackRightLegCollision"));
    this->OverrideSimpleCollisionRadius = 0.00f;
}

