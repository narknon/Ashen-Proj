#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_SoGAmara_ShouldFollowHero.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_SoGAmara_ShouldFollowHero : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_SoGAmara_ShouldFollowHero();
};

