#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Follower_ShouldDrinkWater.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Follower_ShouldDrinkWater : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInCombatTree;
    
    UBTD_Follower_ShouldDrinkWater();
};

