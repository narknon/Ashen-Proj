#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "EUIOnOffSetting.h"
#include "UIOnOffEvent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UUIOnOffEvent : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIOnOffSetting SettingType;
    
public:
    UUIOnOffEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIOnOffSetting GetSettingCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsOn();
    
};

