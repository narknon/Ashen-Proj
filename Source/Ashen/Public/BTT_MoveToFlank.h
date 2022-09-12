#pragma once
#include "CoreMinimal.h"
#include "EAICombatZone.h"
#include "BTT_AshenPathTo.h"
#include "BTT_MoveToFlank.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_MoveToFlank : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAICombatZone CombatZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentMinAngleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SegmentConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestPathToTargetCurveLimit;
    
    UBTT_MoveToFlank();
};

