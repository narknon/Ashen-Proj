#pragma once
#include "CoreMinimal.h"
#include "EGraphicalSettingValue.generated.h"

UENUM(BlueprintType)
enum class EGraphicalSettingValue : uint8 {
    None,
    ResolutionX,
    ResolutionY,
    ResolutionScale,
    FPSCap,
    WindowStyle,
    AntiAliasing,
    VerticleSyncEnabled,
    PostProccessing,
    ShaddowQuality,
    TextureQuality,
    EffectsQuality,
    FoliageQuality,
    Gamma,
    _Max,
};

