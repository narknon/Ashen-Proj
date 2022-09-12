#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "EStreamingZoneEventType.h"
#include "StreamingZoneData.h"
#include "StreamingZoneAshenEventData.generated.h"

class AAshenGameMode;

UCLASS(Blueprintable)
class ASHEN_API UStreamingZoneAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AAshenGameMode> GameMode;
    
public:
    UStreamingZoneAshenEventData();
    UFUNCTION(BlueprintCallable)
    bool IsBlockOnLoad();
    
    UFUNCTION(BlueprintCallable)
    bool IsAreaChange();
    
    UFUNCTION(BlueprintCallable)
    EStreamingZoneEventType GetZoneStreamingEventType();
    
    UFUNCTION(BlueprintCallable)
    FStreamingZoneData GetZoneData();
    
    UFUNCTION(BlueprintCallable)
    FName GetRowName();
    
};

