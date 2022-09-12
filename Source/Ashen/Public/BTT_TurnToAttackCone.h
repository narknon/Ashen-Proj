#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenTurnTo.h"
#include "BTT_TurnToAttackCone.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_TurnToAttackCone : public UBTT_AshenTurnTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreConeForCutoff;
    
    UBTT_TurnToAttackCone();
};

