#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BuffEffect.h"
#include "OutfitBuff_Flea.generated.h"

class ULootBoxComponent;
class UItemConsumable;
class ACreature;

UCLASS(Blueprintable)
class UOutfitBuff_Flea : public UBuffEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToSpawnJunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemConsumable> SpawnedJunkClass;
    
public:
    UOutfitBuff_Flea();
private:
    UFUNCTION(BlueprintCallable)
    void OnLootModified(ULootBoxComponent* _lootComp, ACreature* _lootOwner);
    
};

