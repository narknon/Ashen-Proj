#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.generated.h"

UENUM(BlueprintType)
enum class EEquipmentSlot : uint8 {
    None,
    SlotUtility,
    SlotShield,
    SlotArmour,
    SlotBackWeapon,
    SlotThrownWeapon,
    SlotSideWeapon,
    SlotWaterBottle,
    SlotBelt1,
    SlotBelt2,
    SlotPotion,
    SlotTalisman,
    SlotCurrency,
};

