#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Follower_Matriarch_BoneInDesiredAttackRange.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Follower_Matriarch_BoneInDesiredAttackRange : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Follower_Matriarch_BoneInDesiredAttackRange();
};

