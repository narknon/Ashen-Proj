#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "SavingEvent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API USavingEvent : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsProfileSave;
    
public:
    USavingEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetProfileTypeSave();
    
};

