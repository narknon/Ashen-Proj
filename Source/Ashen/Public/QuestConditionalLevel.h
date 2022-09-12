#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestStateTag.h"
#include "QuestConditionalLevel.generated.h"

class UQuestLine;
class UWorld;

USTRUCT(BlueprintType)
struct ASHEN_API FQuestConditionalLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> ZonesToLoadLevelWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* QuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStateTag> QuestStateTags;
    
    FQuestConditionalLevel();
};

