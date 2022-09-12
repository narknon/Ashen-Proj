#pragma once
#include "CoreMinimal.h"
#include "EPlayState.generated.h"

UENUM(BlueprintType)
enum class EPlayState : uint8 {
    None,
    Menu,
    Loading,
    InGameDead,
    InGamePlay,
    InGameInteractive,
    InGameMenu,
    Cutscene,
    Dialogue,
};

