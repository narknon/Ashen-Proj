#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "QuestSpawnCondition.generated.h"

class UQuestLine;
class UQuestState;

USTRUCT(BlueprintType)
struct ASHEN_API FQuestSpawnCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* QuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestState> QuestState;
    
    FQuestSpawnCondition();
};

