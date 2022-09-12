#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenTurnTo.h"
#include "EAIContextDesire.h"
#include "BTT_TurnToContextDesire.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_TurnToContextDesire : public UBTT_AshenTurnTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIContextDesire ContextDesire;
    
    UBTT_TurnToContextDesire();
};

