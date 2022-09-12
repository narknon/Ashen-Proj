#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayingEvent.h"
#include "AshenVoManager.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAshenVoManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayingEvent> PlayingEvents;
    
public:
    UAshenVoManager();
    UFUNCTION(BlueprintCallable)
    static void OnDialogueTabContinued();
    
};

