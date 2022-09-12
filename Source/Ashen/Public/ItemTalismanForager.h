#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "LootDrop.h"
#include "ItemTalismanForager.generated.h"

class ULootBoxComponent;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanForager : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceForExtraConsumables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusConsumableDropChance;
    
public:
    UItemTalismanForager();
    UFUNCTION(BlueprintCallable)
    void OnLootSpawning(const FLootDrop& LootDrop, float& ModifiableDropChance);
    
    UFUNCTION(BlueprintCallable)
    void OnLootDropped(ULootBoxComponent* LootComponent, ACreature* LootOwner);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

