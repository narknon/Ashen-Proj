#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "UIFocusEvent.generated.h"

class UAshenUserWidget;

UCLASS(Blueprintable)
class ASHEN_API UUIFocusEvent : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenUserWidget* FocusedWidget;
    
public:
    UUIFocusEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAshenUserWidget* GetFocusedWidget();
    
};

