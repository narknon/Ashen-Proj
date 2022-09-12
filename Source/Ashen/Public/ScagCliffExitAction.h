#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "ScagCliffExitAction.generated.h"

class AScagEx;

UCLASS(Blueprintable)
class ASHEN_API AScagCliffExitAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScagEx* Scag;
    
public:
    AScagCliffExitAction();
};

