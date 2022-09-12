#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "SentinelRelicBuffEffect.generated.h"

UCLASS(Blueprintable)
class USentinelRelicBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
    USentinelRelicBuffEffect();
    UFUNCTION(BlueprintCallable)
    void OnInflictDamage(const FAshenDamage& Damage);
    
};

