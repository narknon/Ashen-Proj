#pragma once
#include "CoreMinimal.h"
#include "EActiveUserState.generated.h"

UENUM(BlueprintType)
enum class EActiveUserState : uint8 {
    ControllerNotEngaged,
    ActiveUserPairingInProgress,
    ActiveUserLoadingSavesInProgress,
    ActiveUserPrivilegeInProgress,
    ActiveUserAchievementQueryInProgress,
    ActiveUserPaired,
};

