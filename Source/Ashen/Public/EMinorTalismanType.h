#pragma once
#include "CoreMinimal.h"
#include "EMinorTalismanType.generated.h"

UENUM(BlueprintType)
enum class EMinorTalismanType : uint8 {
    None,
    StaminaBuff,
    BottleDrainBuff,
};

