#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "BuddyAlertReceivedEventData.generated.h"

class AHero;

UCLASS(Blueprintable)
class ASHEN_API UBuddyAlertReceivedEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* PingingHero;
    
public:
    UBuddyAlertReceivedEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetPingingHero();
    
};

