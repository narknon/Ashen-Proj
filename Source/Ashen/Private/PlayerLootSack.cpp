#include "PlayerLootSack.h"
#include "Components/StaticMeshComponent.h"

APlayerLootSack::APlayerLootSack() {
    this->LootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LootMesh"));
}

