#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "OutfitBuff_Wildman.generated.h"

UCLASS(Blueprintable)
class UOutfitBuff_Wildman : public UBuffEffect {
    GENERATED_BODY()
public:
    UOutfitBuff_Wildman();
private:
    UFUNCTION(BlueprintCallable)
    void OnBuffEffectApplied(UBuffEffect* BuffEffect, bool& bCancelEffect);
    
};

