#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "EAIContextDesire.h"
#include "BTT_PathToContextDesire.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_PathToContextDesire : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIContextDesire ContextDesire;
    
    UBTT_PathToContextDesire();
};

