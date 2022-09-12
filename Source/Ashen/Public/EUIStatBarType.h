#pragma once
#include "CoreMinimal.h"
#include "EUIStatBarType.generated.h"

UENUM(BlueprintType)
enum class EUIStatBarType : uint8 {
    None,
    Stamina,
    Health,
    Crit,
    Damage,
    StaminaMitigation,
    StaminaRegen,
    PoiseAttacking,
    PoiseBlocking,
    PoiseSelf,
    ArmourType,
    Lumins,
    Directionality,
    Potency,
    Swigs,
    Timer,
    Description,
    Effect,
    ShieldStrike,
    DamageResistance,
    Debuff,
    Luck,
    Bonus1,
    OrbLimit,
    Bonus2,
    Buff,
    EquipmentBuff,
    Solo,
    LootBuff,
};

