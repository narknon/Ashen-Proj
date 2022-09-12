#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.generated.h"

UENUM(BlueprintType)
enum class EInteractionType : uint8 {
    None,
    WaterOneOff,
    GroundLoot,
    NPC,
    Crafting,
    ResetTrap,
    Ladder,
    Door,
    WaterFixed,
    CoopClamber,
    Clamber,
    SavePoint,
    Alert_DownedResponse,
    Alert_Pinned,
    Alert_CoopDoorLocal,
    Alert_CoopClimbLocal,
    Alert_Waterbottle,
};

