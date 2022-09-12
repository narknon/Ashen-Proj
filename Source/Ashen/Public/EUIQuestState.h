#pragma once
#include "CoreMinimal.h"
#include "EUIQuestState.generated.h"

UENUM(BlueprintType)
enum class EUIQuestState : uint8 {
    None,
    AquireNPC,
    QuestCompleted,
    QuestCompletedOutfit,
    _Max,
};

