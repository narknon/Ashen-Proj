#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "ETownBuildingState.h"
#include "ETownBuildingType.h"
#include "TownStateChangeAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UTownStateChangeAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
    UTownStateChangeAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETownBuildingType GetTownBuildingType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETownBuildingState GetOldState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETownBuildingState GetNewState();
    
};

