#pragma once
#include "CoreMinimal.h"
#include "ECooperativeInteractionType.generated.h"

UENUM(BlueprintType)
enum class ECooperativeInteractionType : uint8 {
    Emote,
    WaterBottleDrink,
    WaterBottleFill,
    SmashPot,
    ConsumeFood,
    WaterBottleGive,
};

