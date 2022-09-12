#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "DamageTakenAction.generated.h"

class ACreature;
class UPathFollowingComponent;

UCLASS(Blueprintable)
class ASHEN_API ADamageTakenAction : public AAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* DamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComp;
    
public:
    ADamageTakenAction();
};

