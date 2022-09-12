#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "EWeight.h"
#include "UIStatBarData.h"
#include "ItemTalismanFeatherlight.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanFeatherlight : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightReduction;
    
public:
    UItemTalismanFeatherlight();
    UFUNCTION(BlueprintCallable)
    void OnSetWeightState(EWeight& _weightState);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

