#pragma once
#include "CoreMinimal.h"
#include "EDamageClass.generated.h"

UENUM(BlueprintType)
enum class EDamageClass : uint8 {
    None,
    Projectile,
    Weapon,
    Explosion,
    Intrinsic,
    Synchronized,
    Fall,
    Environment,
    Bleed,
};

