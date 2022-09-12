#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "MatriarchStepBackAction.generated.h"

class AMatriarch;
class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API UMatriarchStepBackAction : public UBTT_Action {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMatriarch* Matriarch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LeftStepMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RightStepMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredFreeSpaceBehind;
    
public:
    UMatriarchStepBackAction();
};

