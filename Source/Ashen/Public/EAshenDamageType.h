#pragma once
#include "CoreMinimal.h"
#include "EAshenDamageType.generated.h"

UENUM(BlueprintType)
enum class EAshenDamageType : uint8 {
    None,
    Projectile,
    Weapon,
    Talisman,
    Explosion,
    Intrinsic,
    Synchronized,
    Fall,
    Environment,
    AreaOfEffect,
    DiasoraBreath,
    Drowning,
    Bleed,
    Stamina,
    Consumable,
    NetworkSync,
    Crumble,
    _Max,
};

