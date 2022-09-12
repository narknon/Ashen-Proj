#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "FierceTalismanBuffEffect.generated.h"

UCLASS(Blueprintable)
class UFierceTalismanBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
    UFierceTalismanBuffEffect();
private:
    UFUNCTION(BlueprintCallable)
    void OnAttackCharged(FAshenDamage& AshenDamage);
    
};

