#pragma once
#include "CoreMinimal.h"
#include "ESoundLevel.generated.h"

UENUM(BlueprintType)
enum class ESoundLevel : uint8 {
    None,
    Light,
    Normal,
    Heavy,
    MAX,
};

