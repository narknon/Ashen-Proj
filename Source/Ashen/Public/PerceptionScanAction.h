#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "PerceptionScanAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API APerceptionScanAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartMontage;
    
    APerceptionScanAction();
};

