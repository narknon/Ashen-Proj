#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemTalismanPlacebo.generated.h"

class UItemConsumable;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanPlacebo : public UItemTalismanBase {
    GENERATED_BODY()
public:
    UItemTalismanPlacebo();
    UFUNCTION(BlueprintCallable)
    void OnConsumableUsed(UItemConsumable* Consumable);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

