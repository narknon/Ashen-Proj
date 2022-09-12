#pragma once
#include "CoreMinimal.h"
#include "EUITutorialName.generated.h"

UENUM(BlueprintType)
enum class EUITutorialName : uint8 {
    None,
    Map_FirstSaveStone,
    Map_NPCSelect,
    Map_OpenMap,
    Inventory_FocusItem,
    Max,
};

