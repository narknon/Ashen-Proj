#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "EAIContextDesire.h"
#include "BTT_ContextAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_ContextAction : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIContextDesire ContextDesire;
    
    UBTT_ContextAction();
};

