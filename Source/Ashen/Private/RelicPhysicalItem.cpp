#include "RelicPhysicalItem.h"
#include "Components/SkeletalMeshComponent.h"

ARelicPhysicalItem::ARelicPhysicalItem() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
}

