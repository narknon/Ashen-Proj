#include "Doggo.h"
#include "Components/BoxComponent.h"

ADoggo::ADoggo() {
    this->HeadCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("HeadCollision"));
}

