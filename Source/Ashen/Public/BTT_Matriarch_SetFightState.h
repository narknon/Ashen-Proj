#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EMatriarchFightState.h"
#include "BTT_Matriarch_SetFightState.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_Matriarch_SetFightState : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatriarchFightState StateToSet;
    
    UBTT_Matriarch_SetFightState();
};

