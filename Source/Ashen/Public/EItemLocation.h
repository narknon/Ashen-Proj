#pragma once
#include "CoreMinimal.h"
#include "EItemLocation.generated.h"

UENUM(BlueprintType)
enum class EItemLocation : uint8 {
    Undefined,
    Equipped,
    Belt,
    Backpack,
    CraftBag,
    CurrencyBag,
    DebugItemTable,
    QuestBag,
    PersonalLootBox,
    Talisman,
    TalismanPrimary,
    DropBag,
    LootContainer,
    Creature,
    Vendor,
    Discard,
};

