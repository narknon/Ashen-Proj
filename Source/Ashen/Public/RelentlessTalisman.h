#pragma once
#include "CoreMinimal.h"
#include "StaminaDamageThreshold.h"
#include "ItemTalismanBase.h"
#include "RelentlessTalisman.generated.h"

UCLASS(Blueprintable)
class ASHEN_API URelentlessTalisman : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaminaDamageThreshold> StaminaDamageThresholds;
    
public:
    URelentlessTalisman();
    UFUNCTION(BlueprintCallable)
    float GetDamageMultiplierForStamina();
    
};

