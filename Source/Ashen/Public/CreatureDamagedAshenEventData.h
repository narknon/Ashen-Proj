#pragma once
#include "CoreMinimal.h"
#include "CreatureAshenEventData.h"
#include "AshenDamage.h"
#include "CreatureDamagedAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UCreatureDamagedAshenEventData : public UCreatureAshenEventData {
    GENERATED_BODY()
public:
    UCreatureDamagedAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAshenDamage GetDamage() const;
    
};

