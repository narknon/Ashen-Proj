#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "LeechdraughtNegativeBuffEffect.generated.h"

UCLASS(Blueprintable)
class ULeechdraughtNegativeBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CPPEffectDescription;
    
    ULeechdraughtNegativeBuffEffect();
private:
    UFUNCTION(BlueprintCallable)
    void OnBuffEffectApplied(UBuffEffect* BuffEffect, bool& bCancelEffect);
    
};

