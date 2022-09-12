#pragma once
#include "CoreMinimal.h"
#include "EAttackDirection.generated.h"

UENUM(BlueprintType)
enum class EAttackDirection : uint8 {
    None,
    Left,
    Right,
    Forward,
    Backward,
};

