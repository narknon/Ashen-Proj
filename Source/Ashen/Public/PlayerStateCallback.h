#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "ETrackedPlayerState.h"
#include "PlayerStateCallback.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UPlayerStateCallback : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackedPlayerState Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StateNow;
    
public:
    UPlayerStateCallback();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETrackedPlayerState GetTrackedState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStateNow();
    
};

