#pragma once
#include "CoreMinimal.h"
#include "ETrackedPlayerEvent.generated.h"

UENUM(BlueprintType)
enum class ETrackedPlayerEvent : uint8 {
    None,
    Died,
    LightAttack,
    HeavyAttack,
    SpearAimed,
    Evaded,
    LockedOn,
    Creaturekilled,
    Sprinted,
    Jumped,
    TimeSinceSprint,
    TimeSprinting,
    Eaten,
    Looted,
    Emoted,
    PlacedLantern,
    HeldUpSheild,
    SwtichedWeapons,
    SwitchedLeftHand,
    SwitchedConsumable,
    UsedSaveStone,
    OpenedMap,
    EquipedLantern,
    Equiped2H,
    Equiped1H,
    EquipedSpear,
    EquipedShield,
    EquipedPotion,
    EquipedConsumable,
    EquipedArmour,
    MultiplayerCompanionFound,
    MultiplayerAICompanionFound,
    Max,
};

