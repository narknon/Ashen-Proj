#pragma once
#include "CoreMinimal.h"
#include "QuestStateTag.h"
#include "QuestStateTagCondition.generated.h"

class UQuestLine;

USTRUCT(BlueprintType)
struct ASHEN_API FQuestStateTagCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* QuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStateTag> QuestStateTags;
    
    FQuestStateTagCondition();
};

