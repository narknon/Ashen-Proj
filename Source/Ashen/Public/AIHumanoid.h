#pragma once
#include "CoreMinimal.h"
#include "EEquipmentState.h"
#include "Humanoid.h"
#include "AIHumanoid.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AAIHumanoid : public AHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> BlockRaiseMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> BlockLowerMontages;
    
    AAIHumanoid();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncEquipmentState(EEquipmentState SideWeaponState, EEquipmentState BackWeaponState, EEquipmentState ShieldState, EEquipmentState UtilityState);
    
    UFUNCTION(BlueprintCallable)
    void InitializeStartingEquipment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsing2HandedWeapon() const;
    
};

