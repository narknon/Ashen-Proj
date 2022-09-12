#pragma once
#include "CoreMinimal.h"
#include "EGraphicsOptionType.generated.h"

UENUM(BlueprintType)
enum class EGraphicsOptionType : uint8 {
    Normal,
    ApplySettings,
    PresetType,
    Gamma,
    VerticleSync,
    FPSCap,
    Resolution,
    WindowMode,
    FOV,
    Max,
};

