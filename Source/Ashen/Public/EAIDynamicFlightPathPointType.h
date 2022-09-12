#pragma once
#include "CoreMinimal.h"
#include "EAIDynamicFlightPathPointType.generated.h"

UENUM(BlueprintType)
enum class EAIDynamicFlightPathPointType : uint8 {
    Invalid,
    Dynamic,
    Fixed,
    Track_Actor,
    Transient,
};

