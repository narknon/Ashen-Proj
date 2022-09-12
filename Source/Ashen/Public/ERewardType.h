#pragma once
#include "CoreMinimal.h"
#include "ERewardType.generated.h"

UENUM(BlueprintType)
enum class ERewardType : uint8 {
    None,
    Health,
    Stamina,
    CorpseCollected,
    ItemGained,
    ItemRemoved,
    ItemCraftingUnlocked,
    CraftingLevelUnlocked,
    InvalidReward,
};

