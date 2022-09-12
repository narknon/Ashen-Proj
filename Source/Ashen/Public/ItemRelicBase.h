#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemRelicBase.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemRelicBase : public UItemTalismanBase {
    GENERATED_BODY()
public:
    UItemRelicBase();
    UFUNCTION(BlueprintCallable)
    void OwnerRested();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowRelic();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOwnerRested();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHideRelic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRelicHidden() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

