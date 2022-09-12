#pragma once
#include "CoreMinimal.h"
#include "ECoopDoorActionState.generated.h"

UENUM(BlueprintType)
enum class ECoopDoorActionState : uint8 {
    Undefined,
    Intro,
    Loop,
    Exit,
    End,
};

