#pragma once
#include "CoreMinimal.h"
#include "ETownBuildingState.generated.h"

UENUM(BlueprintType)
enum class ETownBuildingState : uint8 {
    Unbuilt,
    Constructing,
    Built,
    Vagrant,
};

