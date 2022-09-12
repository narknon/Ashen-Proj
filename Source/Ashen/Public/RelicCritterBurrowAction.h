#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "RelicCritterBurrowAction.generated.h"

class ARelicSmallGroundCritter;

UCLASS(Blueprintable)
class ASHEN_API ARelicCritterBurrowAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARelicSmallGroundCritter* Critter;
    
public:
    ARelicCritterBurrowAction();
};

