#pragma once
#include "CoreMinimal.h"
#include "ECinematicCreatureType.generated.h"

UENUM(BlueprintType)
enum class ECinematicCreatureType : uint8 {
    LocalHero,
    RemoteHero,
    HostHero,
    ClientHero,
    PreTutorialPazi,
    AshSmith,
    Flea,
    Scion,
    ListenerOutcast,
    FisherWoman,
    TreasureHunter,
    Wildman,
    AshAddict,
    Hunter,
    PegLeg,
    Ashwraith,
    Fallback,
    GnawTraveller,
    ElderDark,
    Matriarch,
    ShadowOfGod,
    Sissna,
};

