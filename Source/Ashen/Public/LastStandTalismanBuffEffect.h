#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "LastStandTalismanBuffEffect.generated.h"

class UItemTalismanLastStand;

UCLASS(Blueprintable)
class ULastStandTalismanBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemTalismanLastStand* OwningTalisman;
    
public:
    ULastStandTalismanBuffEffect();
private:
    UFUNCTION(BlueprintCallable)
    void OnInflictDamage(FAshenDamage& AshenDamage, bool& TestSample);
    
};

