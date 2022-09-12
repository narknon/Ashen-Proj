#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestAreaChange.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FQuestAreaChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle QuestAreaRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Activate;
    
    FQuestAreaChange();
};

