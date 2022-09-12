#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BTT_Action.h"
#include "BTT_PerformSpecialAttack.generated.h"

class AAIAttackActionBase;

UCLASS(Blueprintable)
class ASHEN_API UBTT_PerformSpecialAttack : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIAttackActionBase> OfActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceAttack;
    
    UBTT_PerformSpecialAttack();
};

