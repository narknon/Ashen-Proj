#pragma once
#include "CoreMinimal.h"
#include "ECreatureEventType.generated.h"

UENUM(BlueprintType)
enum class ECreatureEventType : uint8 {
    Spawn,
    Death,
    Emote,
    WaterBottleGive,
    WaterBottleDrink,
    ConsumeFood,
    SwitchedTargets,
    DiscoveredArea,
    EnteredArea,
    FoundLoot,
};

