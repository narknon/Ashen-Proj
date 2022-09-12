#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemTalismanBase.h"
#include "UIStatBarData.h"
#include "ItemTalismanAxungHominis.generated.h"

class ULootBoxComponent;
class UItemConsumable;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanAxungHominis : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemConsumable> SpawnedConsumableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToSpawnFlesh;
    
public:
    UItemTalismanAxungHominis();
    UFUNCTION(BlueprintCallable)
    void OnLootModified(ULootBoxComponent* _lootComp, ACreature* _lootOwner);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

