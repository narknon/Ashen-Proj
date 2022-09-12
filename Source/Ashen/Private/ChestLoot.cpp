#include "ChestLoot.h"
#include "Components/SkeletalMeshComponent.h"

AChestLoot::AChestLoot() {
    this->LootSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LootSkeletalMesh"));
    this->ChestOpenAnim = NULL;
    this->ChestCloseAnim = NULL;
}

