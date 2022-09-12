#pragma once
#include "CoreMinimal.h"
#include "GuardiansPactRelicBuffEffect.h"
#include "AshenDamage.h"
#include "GuardiansPactRelicFixedBuffEffect.generated.h"

UCLASS(Blueprintable)
class UGuardiansPactRelicFixedBuffEffect : public UGuardiansPactRelicBuffEffect {
    GENERATED_BODY()
public:
    UGuardiansPactRelicFixedBuffEffect();
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FAshenDamage& TakenDamage);
    
};

