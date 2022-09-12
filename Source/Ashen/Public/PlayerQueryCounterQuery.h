#pragma once
#include "CoreMinimal.h"
#include "PlayerQueryCounterQuery.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FPlayerQueryCounterQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Query;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IncludedResets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidValueMin_Inclusive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidValueMax_Inclusive;
    
    FPlayerQueryCounterQuery();
};

