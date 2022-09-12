#pragma once
#include "CoreMinimal.h"
#include "MatriarchAttackAction.h"
#include "MatriarchChargeAction.generated.h"

class UAnimMontage;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchChargeAction : public AMatriarchAttackAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ACreature> TargetToChargeAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroOverrideMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ChargeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutroMontage;
    
    AMatriarchChargeAction();
};

