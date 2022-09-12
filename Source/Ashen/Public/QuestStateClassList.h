#pragma once
#include "CoreMinimal.h"
#include "QuestStateTag.h"
#include "QuestStateClassList.generated.h"

USTRUCT(BlueprintType)
struct FQuestStateClassList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStateTag> StateTags;
    
    ASHEN_API FQuestStateClassList();
};

