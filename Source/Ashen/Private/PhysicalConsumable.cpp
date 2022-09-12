#include "PhysicalConsumable.h"
#include "Components/SkeletalMeshComponent.h"

APhysicalConsumable::APhysicalConsumable() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
}

