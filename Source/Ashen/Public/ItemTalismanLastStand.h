#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HealthDamageThreshold.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemTalismanLastStand.generated.h"

class ULastStandTalismanBuffEffect;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanLastStand : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULastStandTalismanBuffEffect> LastStandBuffEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHealthDamageThreshold> HealthDamageThresholds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULastStandTalismanBuffEffect* TalismanBuffEffect;
    
public:
    UItemTalismanLastStand();
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable)
    float GetDamageMultiplierForHealth(float CurrentHealthPercentage);
    
};

