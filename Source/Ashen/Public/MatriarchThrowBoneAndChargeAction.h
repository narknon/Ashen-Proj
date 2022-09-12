#pragma once
#include "CoreMinimal.h"
#include "MatriarchAttackAction.h"
#include "MatriarchThrowBoneAndChargeAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchThrowBoneAndChargeAction : public AMatriarchAttackAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ChargeToBoneRunMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ChargeToBoneAttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickupBoneStartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickupBoneEndMontage;
    
    AMatriarchThrowBoneAndChargeAction();
};

