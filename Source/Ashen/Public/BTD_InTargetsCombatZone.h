#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAICombatZone.h"
#include "BTD_InTargetsCombatZone.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_InTargetsCombatZone : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAICombatZone CombatZone;
    
    UBTD_InTargetsCombatZone();
};

