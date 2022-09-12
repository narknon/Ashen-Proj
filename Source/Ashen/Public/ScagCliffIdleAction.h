#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "ScagCliffIdleAction.generated.h"

class ACreature;
class AScagEx;

UCLASS(Blueprintable)
class ASHEN_API AScagCliffIdleAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScagEx* Scag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* BellRingTarget;
    
public:
    AScagCliffIdleAction();
};

