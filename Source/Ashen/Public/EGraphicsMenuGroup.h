#pragma once
#include "CoreMinimal.h"
#include "EGraphicsMenuGroup.generated.h"

UENUM(BlueprintType)
enum class EGraphicsMenuGroup : uint8 {
    None,
    Normal,
    Group1,
    Group2,
    Group3,
    Group4,
    Max,
};

