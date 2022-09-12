#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    None,
    Locked,
    Anything,
    Backpack,
    Armour,
    Utility,
    Shield,
    SideWeapon,
    BackWeapon,
    ThrownWeapon,
    Belt,
    WaterBottle,
    Crafting,
    Currency,
    Quest,
    Talisman,
    Potion,
};

