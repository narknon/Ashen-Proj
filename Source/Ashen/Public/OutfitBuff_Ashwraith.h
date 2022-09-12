#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "OutfitBuff_Ashwraith.generated.h"

UCLASS(Blueprintable)
class UOutfitBuff_Ashwraith : public UBuffEffect {
    GENERATED_BODY()
public:
    UOutfitBuff_Ashwraith();
private:
    UFUNCTION(BlueprintCallable)
    void OnCriticalDamageMultiplierSet(float& CriticalMultiplier);
    
};

