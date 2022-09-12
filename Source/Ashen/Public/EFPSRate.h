#pragma once
#include "CoreMinimal.h"
#include "EFPSRate.generated.h"

UENUM(BlueprintType)
enum class EFPSRate : uint8 {
    FPS_30,
    FPS_60,
    Uncapped,
};

