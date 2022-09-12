#pragma once
#include "CoreMinimal.h"
#include "MatriarchAttackAction.h"
#include "MatriarchAoeAttackAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchAoeAttackAction : public AMatriarchAttackAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutroMontage;
    
public:
    AMatriarchAoeAttackAction();
};

