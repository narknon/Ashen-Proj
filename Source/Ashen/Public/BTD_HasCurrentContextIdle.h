#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAIContextDesire.h"
#include "BTD_HasCurrentContextIdle.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasCurrentContextIdle : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIContextDesire ContextDesire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAIContextDesire> OrContextDesire;
    
    UBTD_HasCurrentContextIdle();
};

