#pragma once
#include "CoreMinimal.h"
#include "ECinematicName.generated.h"

UENUM(BlueprintType)
enum class ECinematicName : uint8 {
    None,
    TutorialIntro,
    TutorialOutro,
    GameIntro,
    FastTravelIntro,
    FastTravelOutro,
    BarrelFastTravelIntro,
    BarrelFastTravelOutro,
    SaveStoneUnlock,
    CaveExit,
    DiasoraSaved,
    LathyrusDoor,
    GefnMergeStones,
    ElderDarkIntro,
    ElderDarkOutro,
    MatriarchIntro,
    MatriarchOutro,
    ShadowOfGodIntro,
    ShadowOfGodKillFlea,
    ShadowOfGodDeath,
    SissnaIntro,
    SissnaTransformation,
    SissnaDeath,
    RachisIntro,
    CustomName01,
    CustomName02,
    CustomName03,
    CustomName04,
    CustomName05,
    CustomName06,
    CustomName07,
    CustomName08,
    CustomName10,
    CustomName11,
    CustomName12,
};

