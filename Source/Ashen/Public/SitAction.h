#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "SitAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API ASitAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* SitDownMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* SitLoopMontage;
    
    ASitAction();
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted);
    
};

