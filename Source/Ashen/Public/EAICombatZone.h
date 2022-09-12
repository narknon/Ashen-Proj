#pragma once
#include "CoreMinimal.h"
#include "EAICombatZone.generated.h"

UENUM(BlueprintType)
enum class EAICombatZone : uint8 {
    Melee,
    Encounter,
    Open,
};

