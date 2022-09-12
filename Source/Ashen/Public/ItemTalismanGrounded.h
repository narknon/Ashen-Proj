#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "EWeight.h"
#include "UIStatBarData.h"
#include "ItemTalismanGrounded.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanGrounded : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightIncrease;
    
public:
    UItemTalismanGrounded();
    UFUNCTION(BlueprintCallable)
    void OnSetWeightState(EWeight& _weightState);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

