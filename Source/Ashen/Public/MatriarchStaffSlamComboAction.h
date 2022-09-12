#pragma once
#include "CoreMinimal.h"
#include "MatriarchAttackAction.h"
#include "MatriarchStaffSlamComboAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchStaffSlamComboAction : public AMatriarchAttackAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FirstHitMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SecondHitFrontMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SecondHitLeftMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SecondHitRightMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FirstHitOutroMontage;
    
public:
    AMatriarchStaffSlamComboAction();
};

