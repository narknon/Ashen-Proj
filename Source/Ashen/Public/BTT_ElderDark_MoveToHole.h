#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "BTT_ElderDark_MoveToHole.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_ElderDark_MoveToHole : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathSegmentRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathSegmentPointFuzzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArenaRadiusOffset;
    
    UBTT_ElderDark_MoveToHole();
};

