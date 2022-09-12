#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "HeavyHitterBuffEffect.generated.h"

UCLASS(Blueprintable)
class UHeavyHitterBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
    UHeavyHitterBuffEffect();
private:
    UFUNCTION(BlueprintCallable)
    void OnInflictDamage(FAshenDamage& AshenDamage, bool& TestSample);
    
};

