#pragma once
#include "CoreMinimal.h"
#include "EPerceivedHealth.generated.h"

UENUM(BlueprintType)
enum class EPerceivedHealth : uint8 {
    Dead,
    Wounded,
    Healthy,
};

