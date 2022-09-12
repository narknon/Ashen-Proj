#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "PlayerEventsAndStateQuery.h"
#include "PlayerQueryEvent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UPlayerQueryEvent : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerEventsAndStateQuery QueryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNowValid;
    
public:
    UPlayerQueryEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQueryName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerEventsAndStateQuery GetQueryData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsValid();
    
};

