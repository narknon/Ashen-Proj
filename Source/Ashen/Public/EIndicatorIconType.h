#pragma once
#include "CoreMinimal.h"
#include "EIndicatorIconType.generated.h"

UENUM(BlueprintType)
enum class EIndicatorIconType : uint8 {
    None,
    Loot,
    QuestRelevant,
    QuestRecap,
    QuestGiver,
    Player,
    Downed,
};

