#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "HeroBaseOverlapEventData.generated.h"

class AHero;
class AQuestTrigger;

UCLASS(Abstract, Blueprintable)
class ASHEN_API UHeroBaseOverlapEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AHero> Hero;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AQuestTrigger> QuestTrigger;
    
public:
    UHeroBaseOverlapEventData();
    UFUNCTION(BlueprintPure)
    bool IsQuestTriggerEqual(uint8 DesiredTriggerName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroRemote() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AQuestTrigger* GetQuestTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetHero() const;
    
};

