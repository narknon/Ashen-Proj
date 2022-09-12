#pragma once
#include "CoreMinimal.h"
#include "ETownBuildingState.h"
#include "ENpcOutfitState.h"
#include "NpcState.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FNpcState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETownBuildingState HouseState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcOutfitState OutfitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAcquires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Dead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoolProbabilityWeight;
    
    FNpcState();
};

