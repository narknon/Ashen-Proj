#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "QueuedData.generated.h"

class UItemBase;

USTRUCT(BlueprintType)
struct FQueuedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* RewardItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemBase> ClassItem;
    
    ASHEN_API FQueuedData();
};

