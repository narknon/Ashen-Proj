#pragma once
#include "CoreMinimal.h"
#include "EMovementRelativeDirection.generated.h"

UENUM(BlueprintType)
enum class EMovementRelativeDirection : uint8 {
    DIR_None,
    DIR_North,
    DIR_East,
    DIR_South,
    DIR_West,
    DIR_MAX UMETA(Hidden),
};

