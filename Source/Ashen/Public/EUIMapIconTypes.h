#pragma once
#include "CoreMinimal.h"
#include "EUIMapIconTypes.generated.h"

UENUM(BlueprintType)
enum class EUIMapIconTypes : uint8 {
    None,
    PlayerLocation,
    CompanionDowned,
    SaveStone,
    TravelStone,
    QuestPoint,
    Dungeon,
    Cave,
    CorpseLoot,
    Max,
};

