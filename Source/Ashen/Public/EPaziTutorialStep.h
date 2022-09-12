#pragma once
#include "CoreMinimal.h"
#include "EPaziTutorialStep.generated.h"

UENUM(BlueprintType)
enum class EPaziTutorialStep : uint8 {
    None,
    FallingCinematic_PreCinematic,
    Wait_At_Cave_PreCinematic,
    Wait_At_Cave_Cinematic,
    Wait_At_Cave_PostCinematic,
    Move_To_Rock,
    Wait_At_Rock,
    Lead_To_Town,
    Wait_At_Town,
    Generic_Follow,
};

