#pragma once
#include "CoreMinimal.h"
#include "EDiasoraWorldState.generated.h"

UENUM(BlueprintType)
enum class EDiasoraWorldState : uint8 {
    None,
    FlyInBadlands,
    FlyingBadlands,
    FadeOutBadlands,
    Fjord,
};

