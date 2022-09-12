#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "KnockdownAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AKnockdownAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FinishingMontage;
    
    AKnockdownAction();
};

