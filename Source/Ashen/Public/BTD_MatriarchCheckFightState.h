#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EMatriarchFightState.h"
#include "BTD_MatriarchCheckFightState.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_MatriarchCheckFightState : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatriarchFightState StateToCheckAgainst;
    
    UBTD_MatriarchCheckFightState();
};

