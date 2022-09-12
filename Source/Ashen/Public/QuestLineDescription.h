#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestLineDescription.generated.h"

class UQuestLine;

USTRUCT(BlueprintType)
struct ASHEN_API FQuestLineDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* QuestLine;
    
    FQuestLineDescription();
};

