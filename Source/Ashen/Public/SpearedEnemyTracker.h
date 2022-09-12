#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "SpearedEnemyTracker.generated.h"

class ACreature;
class UItemThrownWeapon;
class ULootBoxComponent;

UCLASS(Blueprintable)
class ASHEN_API USpearedEnemyTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ACreature> Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemThrownWeapon> ProjectileClass;
    
public:
    USpearedEnemyTracker();
    UFUNCTION(BlueprintCallable)
    void OnEnemyLootSpawned(ULootBoxComponent* LootComponent, ACreature* LootOwner);
    
};

