#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAIAttackType.h"
#include "BTD_DesiredAttackIsType.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_DesiredAttackIsType : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIAttackType OfAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAIAttackType> OrAttackType;
    
    UBTD_DesiredAttackIsType();
};

