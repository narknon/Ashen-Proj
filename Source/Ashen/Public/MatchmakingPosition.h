#pragma once
#include "CoreMinimal.h"
#include "MatchmakingPosition.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakingPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z;
    
    ASHEN_API FMatchmakingPosition();
};

