#pragma once
#include "CoreMinimal.h"
#include "AIHeroFollower.h"
#include "EEquipmentState.h"
#include "AINpcFollower.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AAINpcFollower : public AAIHeroFollower {
    GENERATED_BODY()
public:
    AAINpcFollower();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncEquipmentState(EEquipmentState SideWeaponState, EEquipmentState BackWeaponState, EEquipmentState ShieldState, EEquipmentState UtilityState);
    
};

