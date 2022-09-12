#pragma once
#include "CoreMinimal.h"
#include "QuestPointArray.generated.h"

class AQuestPoint;

USTRUCT(BlueprintType)
struct ASHEN_API FQuestPointArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AQuestPoint*> QuestPoints;
    
    FQuestPointArray();
};

