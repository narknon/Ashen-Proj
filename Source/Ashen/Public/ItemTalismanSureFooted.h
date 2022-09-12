#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "AshenDamage.h"
#include "UIStatBarData.h"
#include "ItemTalismanSureFooted.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanSureFooted : public UItemTalismanBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalPoiseMultiplier;
    
    UItemTalismanSureFooted();
    UFUNCTION(BlueprintCallable)
    void OnDamageModifier(FAshenDamage& AshenDamage, bool& TestSample);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

