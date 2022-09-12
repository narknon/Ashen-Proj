#include "PhysicalEquipment.h"
#include "Components/SkeletalMeshComponent.h"

USkeletalMeshComponent* APhysicalEquipment::GetSkeletalMesh() {
    return NULL;
}

APhysicalEquipment::APhysicalEquipment() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
}

