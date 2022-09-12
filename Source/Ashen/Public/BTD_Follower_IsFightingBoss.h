#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAIFollowerBossLogicType.h"
#include "BTD_Follower_IsFightingBoss.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Follower_IsFightingBoss : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIFollowerBossLogicType BossType;
    
    UBTD_Follower_IsFightingBoss();
};

