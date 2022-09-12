#pragma once
#include "CoreMinimal.h"
#include "MatriarchAttackAction.h"
#include "MatriarchBoneBrokenAction.generated.h"

class UAnimMontage;
class UAIWeaponAttack;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchBoneBrokenAction : public AMatriarchAttackAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MainActionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutroStaffMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutroChargeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutroMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIWeaponAttack* ChosenEndAttack;
    
public:
    AMatriarchBoneBrokenAction();
};

