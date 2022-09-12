#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "BralCliffIdleAction.generated.h"

class ABral;

UCLASS(Blueprintable)
class ASHEN_API ABralCliffIdleAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABral* Bral;
    
public:
    ABralCliffIdleAction();
};

