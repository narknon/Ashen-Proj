#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "RachisCliffIdleAction.generated.h"

class ARachis;

UCLASS(Blueprintable)
class ASHEN_API ARachisCliffIdleAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARachis* Rachis;
    
public:
    ARachisCliffIdleAction();
};

