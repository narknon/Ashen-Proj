#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemTalismanBloodthirsty.generated.h"

class UBloodthirstyTalismanBuffEffect;
class UAshenEventData;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanBloodthirsty : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBloodthirstyTalismanBuffEffect> BloodthirstyBuffEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreasedDamagePercentagePerStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SingleStackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStacks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBloodthirstyTalismanBuffEffect* TalismanBuffEffect;
    
public:
    UItemTalismanBloodthirsty();
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(UAshenEventData* AshenEventData);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

