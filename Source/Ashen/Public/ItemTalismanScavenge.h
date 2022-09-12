#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "AshenDamage.h"
#include "UIStatBarData.h"
#include "ItemTalismanScavenge.generated.h"

class USpearedEnemyTracker;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanScavenge : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToRetrieveSpear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumLootableSpears;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USpearedEnemyTracker*> SpearedEnemyTrackingArray;
    
public:
    UItemTalismanScavenge();
    UFUNCTION(BlueprintCallable)
    void OnHeroDealtDamage(FAshenDamage& AshenDamage, bool& TestSample);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

