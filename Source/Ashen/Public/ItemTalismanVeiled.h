#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemTalismanVeiled.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanVeiled : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalCriticalChance;
    
public:
    UItemTalismanVeiled();
    UFUNCTION(BlueprintCallable)
    void ModifyCriticalHitChance(float& Chance);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

