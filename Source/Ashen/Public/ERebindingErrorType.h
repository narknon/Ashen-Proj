#pragma once
#include "CoreMinimal.h"
#include "ERebindingErrorType.generated.h"

UENUM(BlueprintType)
enum class ERebindingErrorType : uint8 {
    None,
    MissingKey,
    DoubleBound,
};

