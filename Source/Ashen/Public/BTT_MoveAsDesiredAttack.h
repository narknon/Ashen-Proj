#pragma once
#include "CoreMinimal.h"
#include "EAICombatZone.h"
#include "BTT_AshenPathTo.h"
#include "BTT_MoveAsDesiredAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_MoveAsDesiredAttack : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAICombatZone DefaultFlankCombatZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFlankSegmentMinAngleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFlankSegmentConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFlankDestPathToTargetCurveLimit;
    
    UBTT_MoveAsDesiredAttack();
};

