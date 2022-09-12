#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "EActiveUserState.h"
#include "ActiveUserStateChangedAshenEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UActiveUserStateChangedAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
    UActiveUserStateChangedAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EActiveUserState GetOldState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EActiveUserState GetNewState();
    
};

