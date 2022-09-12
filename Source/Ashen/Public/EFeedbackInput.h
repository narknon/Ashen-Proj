#pragma once
#include "CoreMinimal.h"
#include "EFeedbackInput.generated.h"

UENUM(BlueprintType)
enum class EFeedbackInput : uint8 {
    None,
    ImpulseMiniPulse,
    ImpulseLight,
    ImpulseMedium,
    ImpulseHeavy,
    LightAttack,
    HeavyAttack,
    PlayerDamageLight,
    PlayerDamageHeavy,
    PlayerDamageKill,
    WorldRumbleShort,
    WorldRumbleLong,
    WorldRumbleHeavyShort,
    WorldRumbleHeavyLong,
    WorldSlam,
    WorldScrape,
    MatriarchSlam,
    MatriarchScrape,
};

