#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UISavingSpinner.generated.h"

class UAshenEventData;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUISavingSpinner : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UUISavingSpinner();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SaveJustHappened();
    
    UFUNCTION(BlueprintCallable)
    void OnSaveEvent(UAshenEventData* EventData);
    
};

