#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "DoorMaidenDisarmAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API ADoorMaidenDisarmAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* DisarmMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* IdleLoopMontage;
    
    ADoorMaidenDisarmAction();
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted);
    
};

