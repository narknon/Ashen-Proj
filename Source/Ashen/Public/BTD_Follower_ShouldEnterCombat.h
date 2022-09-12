#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Follower_ShouldEnterCombat.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Follower_ShouldEnterCombat : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Follower_ShouldEnterCombat();
};

