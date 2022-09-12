#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemTalismanDoubleShot.generated.h"

class UItemTable;
class UItemBase;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanDoubleShot : public UItemTalismanBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffDurationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumExtraWaterBottleCharges;
    
    UItemTalismanDoubleShot();
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

