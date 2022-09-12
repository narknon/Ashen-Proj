#pragma once
#include "CoreMinimal.h"
#include "ETrackedPlayerEvent.h"
#include "PlayerEventsQuery.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FPlayerEventsQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackedPlayerEvent Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncludedResets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidValueMin_Inclusive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidValueMax_Inclusive;
    
    FPlayerEventsQuery();
};

