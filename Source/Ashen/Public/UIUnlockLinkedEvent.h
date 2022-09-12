#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "EUIWidgetUnlockFX.h"
#include "UIUnlockLinkedEvent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UUIUnlockLinkedEvent : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIWidgetUnlockFX SettingType;
    
public:
    UUIUnlockLinkedEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIWidgetUnlockFX GetSettingCategory();
    
};

