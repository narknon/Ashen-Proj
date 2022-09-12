#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "ChangeTargetThreatAction.generated.h"

class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AChangeTargetThreatAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* Target;
    
    AChangeTargetThreatAction();
};

