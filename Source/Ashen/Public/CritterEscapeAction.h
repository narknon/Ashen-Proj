#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "CritterEscapeAction.generated.h"

class ASmallGroundCritter;

UCLASS(Blueprintable)
class ASHEN_API ACritterEscapeAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASmallGroundCritter* Critter;
    
public:
    ACritterEscapeAction();
};

