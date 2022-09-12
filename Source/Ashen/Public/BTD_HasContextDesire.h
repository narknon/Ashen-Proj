#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAIContextDesire.h"
#include "BTD_HasContextDesire.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasContextDesire : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIContextDesire ContextDesire;
    
    UBTD_HasContextDesire();
};

