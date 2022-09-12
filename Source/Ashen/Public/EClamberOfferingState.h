#pragma once
#include "CoreMinimal.h"
#include "EClamberOfferingState.generated.h"

UENUM(BlueprintType)
enum class EClamberOfferingState : uint8 {
    Start,
    Loop,
    Accepted,
    Failed,
};

