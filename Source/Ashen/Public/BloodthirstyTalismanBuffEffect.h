#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "BloodthirstyTalismanBuffEffect.generated.h"

UCLASS(Blueprintable)
class UBloodthirstyTalismanBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
    UBloodthirstyTalismanBuffEffect();
    UFUNCTION(BlueprintCallable)
    void OnDealDamage(FAshenDamage& Damage, bool& TestSample);
    
};

