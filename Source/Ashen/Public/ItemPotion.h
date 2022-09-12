#pragma once
#include "CoreMinimal.h"
#include "ItemConsumable.h"
#include "UIStatBarData.h"
#include "ItemPotion.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemPotion : public UItemConsumable {
    GENERATED_BODY()
public:
    UItemPotion();
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

