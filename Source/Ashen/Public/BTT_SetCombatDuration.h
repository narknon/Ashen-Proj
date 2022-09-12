#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_SetCombatDuration.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_SetCombatDuration : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatDuration;
    
    UBTT_SetCombatDuration();
};

