#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ShouldModifyTargetThreat.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ShouldModifyTargetThreat : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEscalate;
    
    UBTD_ShouldModifyTargetThreat();
};

