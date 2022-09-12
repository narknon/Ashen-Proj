#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "EAIContextDesire.h"
#include "BTT_PathTowardsContextDesire.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_PathTowardsContextDesire : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIContextDesire ContextDesire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToDesireHalfAngle;
    
    UBTT_PathTowardsContextDesire();
};

