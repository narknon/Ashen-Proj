#pragma once
#include "CoreMinimal.h"
#include "EMaxStunEffect.generated.h"

UENUM(BlueprintType)
enum class EMaxStunEffect : uint8 {
    None,
    Push,
    Stagger,
    Stun,
    Knockdown,
};

