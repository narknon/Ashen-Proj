#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "EArmourWeight.h"
#include "ItemTalismanIndustrious.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanIndustrious : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyArmourReductionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumArmourReductionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightArmourReductionMultiplier;
    
public:
    UItemTalismanIndustrious();
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStaminaPenaltyModifier(EArmourWeight ArmourWeight, float& CurrentValue);
    
};

