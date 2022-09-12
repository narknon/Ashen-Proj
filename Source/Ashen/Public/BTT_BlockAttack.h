#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_BlockAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_BlockAttack : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_BlockAttack();
};

