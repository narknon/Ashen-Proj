#pragma once
#include "CoreMinimal.h"
#include "EAshenQueuedInputType.generated.h"

UENUM(BlueprintType)
enum class EAshenQueuedInputType : uint8 {
    None,
    LightAttack,
    HeavyAttack,
    SecondaryAttack,
    Evade,
    UseItem,
    Jump,
    Emote,
    Block,
    EquipLeftHand,
    EquipRightHand,
};

