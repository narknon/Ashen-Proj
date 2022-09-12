#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_PaziPreTutorial_ShouldFollowPlayer.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_PaziPreTutorial_ShouldFollowPlayer : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_PaziPreTutorial_ShouldFollowPlayer();
};

