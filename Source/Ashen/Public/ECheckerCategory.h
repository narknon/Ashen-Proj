#pragma once
#include "CoreMinimal.h"
#include "ECheckerCategory.generated.h"

UENUM(BlueprintType)
enum class ECheckerCategory : uint8 {
    None,
    Defualt,
    Achievement,
    TutorialController,
    DefualtTutorial,
    EquipmentTutorial,
    CombatTutorial,
    _Max,
};

