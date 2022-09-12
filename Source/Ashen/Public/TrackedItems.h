#pragma once
#include "CoreMinimal.h"
#include "EQuestItem.h"
#include "TrackedItems.generated.h"

USTRUCT(BlueprintType)
struct FTrackedItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EQuestItem> Items;
    
    ASHEN_API FTrackedItems();
};

