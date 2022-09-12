#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "ReducedBlockCostBuffEffect.generated.h"

UCLASS(Blueprintable)
class UReducedBlockCostBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
    UReducedBlockCostBuffEffect();
private:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(FAshenDamage& Damage);
    
};

