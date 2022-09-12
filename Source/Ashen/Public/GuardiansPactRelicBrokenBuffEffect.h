#pragma once
#include "CoreMinimal.h"
#include "GuardiansPactRelicBuffEffect.h"
#include "GuardiansPactRelicBrokenBuffEffect.generated.h"

UCLASS(Blueprintable)
class UGuardiansPactRelicBrokenBuffEffect : public UGuardiansPactRelicBuffEffect {
    GENERATED_BODY()
public:
    UGuardiansPactRelicBrokenBuffEffect();
    UFUNCTION(BlueprintCallable)
    void OnCurrencyGained(int32& GainedCurrency);
    
};

