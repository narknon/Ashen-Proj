#pragma once
#include "CoreMinimal.h"
#include "EAICombatCommand.generated.h"

UENUM(BlueprintType)
enum class EAICombatCommand : uint8 {
    None,
    Flank_Target,
    Attack_Target,
    Swap_Behaviour_,
};

