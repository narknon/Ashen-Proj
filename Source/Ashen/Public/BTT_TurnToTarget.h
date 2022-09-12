#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenTurnTo.h"
#include "BTT_TurnToTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_TurnToTarget : public UBTT_AshenTurnTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOffsetTargetByItsVelocity;
    
    UBTT_TurnToTarget();
};

