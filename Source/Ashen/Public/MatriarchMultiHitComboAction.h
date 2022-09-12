#pragma once
#include "CoreMinimal.h"
#include "MatriarchAttackAction.h"
#include "MatriarchMultiHitComboAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchMultiHitComboAction : public AMatriarchAttackAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FirstHitMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FirstHitEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SecondHitMontage;
    
public:
    AMatriarchMultiHitComboAction();
};

