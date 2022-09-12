#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Follower_ShouldHelpHeroPuzzle.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Follower_ShouldHelpHeroPuzzle : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Follower_ShouldHelpHeroPuzzle();
};

