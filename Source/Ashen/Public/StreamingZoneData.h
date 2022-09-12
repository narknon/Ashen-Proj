#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAreaName.h"
#include "StreamingZoneData.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct ASHEN_API FStreamingZoneData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaName AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLoadingTimeLimitXbox;
    
    FStreamingZoneData();
};

