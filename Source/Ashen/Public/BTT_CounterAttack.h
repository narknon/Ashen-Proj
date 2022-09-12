#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "BTT_CounterAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_CounterAttack : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FailTaskOnAttackMiss;
    
    UBTT_CounterAttack();
};

