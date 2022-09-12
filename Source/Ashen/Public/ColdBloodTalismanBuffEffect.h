#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "ColdBloodTalismanBuffEffect.generated.h"

UCLASS(Blueprintable)
class UColdBloodTalismanBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
    UColdBloodTalismanBuffEffect();
    UFUNCTION(BlueprintCallable)
    void OnInflictDamage(FAshenDamage& AshenDamage, bool& TestSample);
    
};

