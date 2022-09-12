#pragma once
#include "CoreMinimal.h"
#include "BTT_MoveToAttackRange.h"
#include "BTT_FollowerMoveToAttackRange.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_FollowerMoveToAttackRange : public UBTT_MoveToAttackRange {
    GENERATED_BODY()
public:
    UBTT_FollowerMoveToAttackRange();
};

