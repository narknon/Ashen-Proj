#pragma once
#include "CoreMinimal.h"
#include "EStaminaDrainType.generated.h"

UENUM(BlueprintType)
enum class EStaminaDrainType : uint8 {
    None,
    Evade,
    Block,
    Sprint,
    Attack,
    Consumable,
};

