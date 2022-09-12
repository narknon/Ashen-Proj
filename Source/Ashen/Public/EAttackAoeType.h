#pragma once
#include "CoreMinimal.h"
#include "EAttackAoeType.generated.h"

UENUM(BlueprintType)
enum class EAttackAoeType : uint8 {
    Stomp,
    SmallStomp,
    StaffHit,
};

