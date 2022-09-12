#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Follower_ShouldEatMushroom.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Follower_ShouldEatMushroom : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInCombatTree;
    
    UBTD_Follower_ShouldEatMushroom();
};

