#pragma once
#include "CoreMinimal.h"
#include "ENpcType.generated.h"

UENUM(BlueprintType)
enum class ENpcType : uint8 {
    None,
    Flea,
    Scion,
    Ashsmith,
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
    VagrantBroca,
    _Max,
};

