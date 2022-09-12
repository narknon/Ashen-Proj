#include "MatriarchEffectBlockingVolume.h"
#include "Components/BoxComponent.h"

AMatriarchEffectBlockingVolume::AMatriarchEffectBlockingVolume() {
    this->AreaBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("AreaComponent"));
}

