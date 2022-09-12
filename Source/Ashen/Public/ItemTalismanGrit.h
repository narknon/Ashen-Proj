#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "AshenDamage.h"
#include "UIStatBarData.h"
#include "ItemTalismanGrit.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanGrit : public UItemTalismanBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageDamageReduction;
    
    UItemTalismanGrit();
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(FAshenDamage& AshenDamage);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

