#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemTalismanRekindle.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanRekindle : public UItemTalismanBase {
    GENERATED_BODY()
public:
    UItemTalismanRekindle();
    UFUNCTION(BlueprintCallable)
    void OnHeroRevived(float& ReviveHealth);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

