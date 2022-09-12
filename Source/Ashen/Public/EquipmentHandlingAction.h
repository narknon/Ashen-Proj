#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "EquipmentHandlingAction.generated.h"

class UItemEquipment;
class UAnimMontage;

UCLASS(Abstract, Blueprintable)
class ASHEN_API AEquipmentHandlingAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZeroVelocityAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* OriginalMontage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemEquipment* LeftHandEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemEquipment* RightHandEquipment;
    
public:
    AEquipmentHandlingAction();
protected:
    UFUNCTION(BlueprintCallable)
    void ReequipEquipment();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRightHandStored();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftHandStored();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemEquipment* GetRightHandEquipment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemEquipment* GetLeftHandEquipment();
    
};

