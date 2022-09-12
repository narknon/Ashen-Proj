#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "ClamberAction.generated.h"

class UPathFollowingComponent;
class ANavLinkProxy;

UCLASS(Blueprintable)
class ASHEN_API AClamberAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANavLinkProxy* NavLink;
    
    AClamberAction();
};

