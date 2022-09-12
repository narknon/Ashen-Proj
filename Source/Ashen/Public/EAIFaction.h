#pragma once
#include "CoreMinimal.h"
#include "EAIFaction.generated.h"

UENUM(BlueprintType)
enum class EAIFaction : uint8 {
    Undefined,
    Vagrant,
    Scag,
    AshWraith,
    Forgone,
    Listener,
    Bral,
    Animal_Prey,
    Animal_Predator,
    Townsfolk,
    Listener_Slaves,
    Lathyrian,
    HonorableLathyrian,
    Cannibal,
};

