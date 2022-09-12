#pragma once
#include "CoreMinimal.h"
#include "NpcAshenEventData.h"
#include "NpcState.h"
#include "NpcStateChangedAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UNpcStateChangedAshenEventData : public UNpcAshenEventData {
    GENERATED_BODY()
public:
    UNpcStateChangedAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNpcState GetOldState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNpcState GetNewState();
    
};

