#pragma once
#include "CoreMinimal.h"
#include "EIndicatorType.generated.h"

UENUM(BlueprintType)
enum class EIndicatorType : uint8 {
    None,
    LootBox,
    LootBoxEmpty,
    PersonalStorageBox,
    CorpseLoot,
    CraftingTable,
    Hero,
    QuestRelevantObject,
    QuestRelevantCreature,
    NPC,
};

