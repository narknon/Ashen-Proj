#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "AmityTalismanBuffEffect.generated.h"

class UItemTalismanAmity;

UCLASS(Blueprintable)
class UAmityTalismanBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemTalismanAmity* TalismanOwner;
    
public:
    UAmityTalismanBuffEffect();
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(FAshenDamage& Damage);
    
};

