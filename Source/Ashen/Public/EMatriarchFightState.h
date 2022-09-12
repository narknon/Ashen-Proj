#pragma once
#include "CoreMinimal.h"
#include "EMatriarchFightState.generated.h"

UENUM(BlueprintType)
enum class EMatriarchFightState : uint8 {
    Uninitialised,
    CutsceneEnd,
    Fighting,
};

