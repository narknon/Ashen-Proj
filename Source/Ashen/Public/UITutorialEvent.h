#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "EUITutorialName.h"
#include "UITutorialEvent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UUITutorialEvent : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAddingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUITutorialName TutorialName;
    
public:
    UUITutorialEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUITutorialName GetTutorialName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAddingType();
    
};

