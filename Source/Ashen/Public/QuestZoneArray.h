#pragma once
#include "CoreMinimal.h"
#include "QuestPointArray.h"
#include "QuestZoneArray.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FQuestZoneArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestPointArray> Zones;
    
    FQuestZoneArray();
};

