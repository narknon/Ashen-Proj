#pragma once
#include "CoreMinimal.h"
#include "EDiasoraFjordState.generated.h"

UENUM(BlueprintType)
enum class EDiasoraFjordState : uint8 {
    None,
    PendingFlyIn,
    FlyingIn,
    Landed,
    LandedIdle,
    LandedAttacking,
};

