#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemTalismanFierce.generated.h"

class UFierceTalismanBuffEffect;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanFierce : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercentageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFierceTalismanBuffEffect> FierceBuffEffectClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFierceTalismanBuffEffect* TalismanBuffEffect;
    
public:
    UItemTalismanFierce();
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

