#pragma once
#include "CoreMinimal.h"
#include "BTD_Follower_ShouldEnterCombat.h"
#include "BTD_SoGAmara_ShouldBeginFight.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_SoGAmara_ShouldBeginFight : public UBTD_Follower_ShouldEnterCombat {
    GENERATED_BODY()
public:
    UBTD_SoGAmara_ShouldBeginFight();
};

