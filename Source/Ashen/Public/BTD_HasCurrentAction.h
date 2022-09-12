#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTDecorator.h"
#include "EActionType.h"
#include "BTD_HasCurrentAction.generated.h"

class AAction;

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasCurrentAction : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionType HasActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAction> HasActionClass;
    
    UBTD_HasCurrentAction();
};

