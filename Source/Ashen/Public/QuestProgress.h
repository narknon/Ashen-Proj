#pragma once
#include "CoreMinimal.h"
#include "QuestProgress.generated.h"

class UQuestState;

USTRUCT(BlueprintType)
struct FQuestProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestState*> States;
    
    ASHEN_API FQuestProgress();
};

