#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "AIPerceptionSenseRules.h"
#include "UIStatBarData.h"
#include "ItemTalismanStalker.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanStalker : public UItemTalismanBase {
    GENERATED_BODY()
public:
    UItemTalismanStalker();
    UFUNCTION(BlueprintCallable)
    void OnOwnerBeingSensed(FAIPerceptionSenseRules& SenseRules);
    
    UFUNCTION(BlueprintCallable)
    void OnFootstepSoundAttempingPlay(bool& bShouldPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void OnAmbushTriggered(bool& bCanTriggerAmbush);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

