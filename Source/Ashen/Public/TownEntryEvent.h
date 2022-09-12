#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "TownEntryEvent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UTownEntryEvent : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InsideTown;
    
public:
    UTownEntryEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHeroInTown();
    
};

