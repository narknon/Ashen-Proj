#pragma once
#include "CoreMinimal.h"
#include "EDamageEffectType.generated.h"

UENUM(BlueprintType)
enum class EDamageEffectType : uint8 {
    None,
    Blunt,
    Sharp,
    HeavyBlunt,
    HeavySharp,
    ScagVomit,
    DiasoraBreathBurn,
    MatriarchBoneBleed,
    RunicAxe,
};

