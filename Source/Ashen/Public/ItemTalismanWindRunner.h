#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "EStaminaDrainType.h"
#include "AshenDamage.h"
#include "UIStatBarData.h"
#include "ItemTalismanWindRunner.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanWindRunner : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintCostModifier;
    
public:
    UItemTalismanWindRunner();
    UFUNCTION(BlueprintCallable)
    void OnStaminaConsumed(float& _stamina, EStaminaDrainType _drainType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageReceived(FAshenDamage& _damage);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

