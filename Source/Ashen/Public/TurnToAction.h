#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "TurnToAction.generated.h"

class UPathFollowingComponent;
class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API ATurnToAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComp;
    
    ATurnToAction();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted);
    
};

