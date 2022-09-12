#include "SkeletonLoot.h"
#include "DestructibleComponent.h"

ASkeletonLoot::ASkeletonLoot() {
    this->DestructibleMeshComponent = CreateDefaultSubobject<UDestructibleComponent>(TEXT("DestructibleMeshComponent"));
}

