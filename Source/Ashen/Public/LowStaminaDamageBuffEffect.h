#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "LowStaminaDamageBuffEffect.generated.h"

class URelentlessTalisman;

UCLASS(Blueprintable)
class ULowStaminaDamageBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URelentlessTalisman* OwningTalisman;
    
public:
    ULowStaminaDamageBuffEffect();
private:
    UFUNCTION(BlueprintCallable)
    void OnDamage(FAshenDamage& Damage, bool& IsTestSample);
    
};

