#pragma once
#include "CoreMinimal.h"
#include "RewardItemInfo.generated.h"

class UUIRewardQueueItem;

USTRUCT(BlueprintType)
struct FRewardItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIRewardQueueItem* Item;
    
    ASHEN_API FRewardItemInfo();
};

