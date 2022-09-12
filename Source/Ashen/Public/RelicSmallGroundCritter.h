#pragma once
#include "CoreMinimal.h"
#include "SmallGroundCritter.h"
#include "RelicSmallGroundCritter.generated.h"

UCLASS(Blueprintable)
class ASHEN_API ARelicSmallGroundCritter : public ASmallGroundCritter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceBeforeBurrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMoveDistanceFromPlayer;
    
    ARelicSmallGroundCritter();
};

