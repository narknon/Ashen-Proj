#pragma once
#include "CoreMinimal.h"
#include "EPhaseRequirement.generated.h"

UENUM(BlueprintType)
enum class EPhaseRequirement : uint8 {
    Ignored,
    PhaseOne,
    PhaseTwo,
};

