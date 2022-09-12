#pragma once
#include "CoreMinimal.h"
#include "ETrackedPlayerState.h"
#include "PlayerStateQuery.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FPlayerStateQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackedPlayerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiredState;
    
    FPlayerStateQuery();
};

