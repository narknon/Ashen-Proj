#pragma once
#include "CoreMinimal.h"
#include "EAIFollowerMarkerMode.generated.h"

UENUM(BlueprintType)
enum class EAIFollowerMarkerMode : uint8 {
    Sphere,
    Cylinder,
    Box,
    Plane,
};

