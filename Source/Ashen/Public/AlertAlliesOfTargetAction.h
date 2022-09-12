#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "AlertAlliesOfTargetAction.generated.h"

class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AAlertAlliesOfTargetAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> AlertingAllies;
    
    AAlertAlliesOfTargetAction();
};

