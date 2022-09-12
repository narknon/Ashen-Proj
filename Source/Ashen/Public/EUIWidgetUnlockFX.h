#pragma once
#include "CoreMinimal.h"
#include "EUIWidgetUnlockFX.generated.h"

UENUM(BlueprintType)
enum class EUIWidgetUnlockFX : uint8 {
    None,
    AshChipsRecieved,
    AshChipsLost_CurrencySubtraction,
    QuestStarted,
    QuestCompleted,
    NPCAquiredFirstTime,
    NPCAquired,
    BossDefeated,
    _Max,
};

