#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_SpecialAttackIsValid.generated.h"

class AAIAttackActionBase;

UCLASS(Blueprintable)
class ASHEN_API UBTD_SpecialAttackIsValid : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIAttackActionBase> OfActionType;
    
    UBTD_SpecialAttackIsValid();
};

