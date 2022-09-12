#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAIContextType.h"
#include "BTD_HasActiveContext.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasActiveContext : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIContextType ContextType;
    
    UBTD_HasActiveContext();
};

