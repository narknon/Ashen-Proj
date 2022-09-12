#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "BTT_MoveTowardsSpawner.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_MoveTowardsSpawner : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToSpawnerHalfAngle;
    
    UBTT_MoveTowardsSpawner();
};

