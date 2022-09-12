#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "ShadowfiendRelicBuffEffect.generated.h"

UCLASS(Blueprintable)
class UShadowfiendRelicBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
    UShadowfiendRelicBuffEffect();
private:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(FAshenDamage& Damage, bool& TestSample);
    
};

