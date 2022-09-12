#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "ETrackedPlayerEvent.h"
#include "PlayerEventsCountCallback.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UPlayerEventsCountCallback : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackedPlayerEvent Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountNow;
    
public:
    UPlayerEventsCountCallback();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETrackedPlayerEvent GetTrackedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmount();
    
};

