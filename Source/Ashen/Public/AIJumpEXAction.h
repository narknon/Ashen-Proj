#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "AIJumpEXAction.generated.h"

class UAnimMontage;
class UPathFollowingComponent;
class ANavLinkProxy;

UCLASS(Blueprintable)
class ASHEN_API AAIJumpEXAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* JumpLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* JumpLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* JumpLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANavLinkProxy* NavLink;
    
public:
    AAIJumpEXAction();
};

