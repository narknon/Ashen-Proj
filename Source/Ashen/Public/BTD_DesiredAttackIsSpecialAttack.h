#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_DesiredAttackIsSpecialAttack.generated.h"

class AAIAttackActionBase;

UCLASS(Blueprintable)
class ASHEN_API UBTD_DesiredAttackIsSpecialAttack : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIAttackActionBase> OfActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AAIAttackActionBase>> OrActionType;
    
    UBTD_DesiredAttackIsSpecialAttack();
};

