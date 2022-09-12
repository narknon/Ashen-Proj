#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "MatriarchBonePullAction.generated.h"

class AMatriarch;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchBonePullAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMatriarch* Matriarch;
    
public:
    AMatriarchBonePullAction();
};

