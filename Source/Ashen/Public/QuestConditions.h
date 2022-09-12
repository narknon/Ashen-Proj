#pragma once
#include "CoreMinimal.h"
#include "QuestStateClassList.h"
#include "QuestConditions.generated.h"

class UQuestLine;

USTRUCT(BlueprintType)
struct FQuestConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UQuestLine*, FQuestStateClassList> QuestWhitelist;
    
    ASHEN_API FQuestConditions();
};

