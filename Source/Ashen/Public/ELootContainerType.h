#pragma once
#include "CoreMinimal.h"
#include "ELootContainerType.generated.h"

UENUM(BlueprintType)
enum class ELootContainerType : uint8 {
    None,
    NPCLoot,
    GroundSack,
    SkeletonLoot,
    PlayerSack,
    Chest,
    PlayerStorage,
    Trap,
};

