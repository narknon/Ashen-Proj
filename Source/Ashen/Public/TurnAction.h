#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "TurnAction.generated.h"

class UPathFollowingComponent;
class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API ATurnAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComp;
    
    ATurnAction();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted);
    
};

