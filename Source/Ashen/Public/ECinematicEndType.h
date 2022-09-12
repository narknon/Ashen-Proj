#pragma once
#include "CoreMinimal.h"
#include "ECinematicEndType.generated.h"

UENUM(BlueprintType)
enum class ECinematicEndType : uint8 {
    Play,
    Travel,
    Travel_ViaDiasora,
    Loading,
};

