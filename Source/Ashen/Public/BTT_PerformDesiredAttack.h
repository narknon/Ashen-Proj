#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "BTT_PerformDesiredAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_PerformDesiredAttack : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailTaskOnAttackMiss;
    
    UBTT_PerformDesiredAttack();
};

