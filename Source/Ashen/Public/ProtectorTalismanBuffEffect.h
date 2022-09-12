#pragma once
#include "CoreMinimal.h"
#include "BuffEffect.h"
#include "AshenDamage.h"
#include "ProtectorTalismanBuffEffect.generated.h"

class UItemTalismanProtector;
class UHeroVitalAttributes;

UCLASS(Blueprintable)
class UProtectorTalismanBuffEffect : public UBuffEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemTalismanProtector* TalismanOwner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHeroVitalAttributes* PartnerAttributesToMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercentageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseDamageMultiplier;
    
public:
    UProtectorTalismanBuffEffect();
    UFUNCTION(BlueprintCallable)
    void UpdateTalisman();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInflictDamage(FAshenDamage& AshenDamage, bool& TestSample);
    
};

