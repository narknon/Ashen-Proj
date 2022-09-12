#pragma once
#include "CoreMinimal.h"
#include "EAttackType.generated.h"

UENUM(BlueprintType)
enum class EAttackType : uint8 {
    Undefined,
    Light,
    Heavy,
    Other,
    Throwable,
    AiRush,
    AiBackwards,
    AiAggressive,
    AiRanged,
    AiSuicide,
    Ability,
};

