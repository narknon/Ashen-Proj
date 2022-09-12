#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "GameplayTagContainer.h"
#include "EQuestItem.h"
#include "TrackedObjectChangeEvent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UTrackedObjectChangeEvent : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CreatureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestItem QuestItemType;
    
public:
    UTrackedObjectChangeEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuestItem GetTrackedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTrackedCreature();
    
};

