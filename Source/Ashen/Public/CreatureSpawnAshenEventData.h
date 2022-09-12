#pragma once
#include "CoreMinimal.h"
#include "CreatureAshenEventData.h"
#include "CreatureSpawnAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UCreatureSpawnAshenEventData : public UCreatureAshenEventData {
    GENERATED_BODY()
public:
    UCreatureSpawnAshenEventData();
};

