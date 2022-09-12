#pragma once
#include "CoreMinimal.h"
#include "EDiasoraTriggerType.generated.h"

UENUM(BlueprintType)
enum class EDiasoraTriggerType : uint8 {
    None,
    SkyDiasoraFadeInTrigger,
    SkyDiasoraFadeOutTrigger,
    DamageImmunityZone,
    Damage,
    FlyOverTrigger,
    AttackActivateTriggerTop,
    AttackActivateTriggerBot,
};

