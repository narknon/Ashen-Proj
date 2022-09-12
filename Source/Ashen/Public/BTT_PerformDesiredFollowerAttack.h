#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "BTT_PerformDesiredFollowerAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_PerformDesiredFollowerAttack : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailTaskOnAttackMiss;
    
    UBTT_PerformDesiredFollowerAttack();
};

