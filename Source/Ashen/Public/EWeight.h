#pragma once
#include "CoreMinimal.h"
#include "EWeight.generated.h"

UENUM(BlueprintType)
enum class EWeight : uint8 {
    None,
    Light,
    Medium,
    Heavy,
    Unmovable,
};

