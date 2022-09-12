#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "HumanoidHovelExitAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AHumanoidHovelExitAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* ExitMontage;
    
    AHumanoidHovelExitAction();
};

