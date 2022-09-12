#pragma once
#include "CoreMinimal.h"
#include "EStatusMenuType.generated.h"

UENUM(BlueprintType)
enum class EStatusMenuType : uint8 {
    None,
    Inventory,
    Equipment,
    LootBox,
    Talisman,
    PersonalLootBox,
};

