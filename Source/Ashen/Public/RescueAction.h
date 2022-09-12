#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "RescueAction.generated.h"

class UAnimMontage;
class ACreature;
class ADownedAction;

UCLASS(Blueprintable)
class ASHEN_API ARescueAction : public AAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ACreature> DownedCreature;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ADownedAction> DownedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RescueEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRescueTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RescueTimer;
    
public:
    ARescueAction();
};

