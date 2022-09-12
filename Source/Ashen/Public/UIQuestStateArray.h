#pragma once
#include "CoreMinimal.h"
#include "EUIQuestState.h"
#include "UIQuestStateArray.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FUIQuestStateArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUIQuestState> QuestStateArray;
    
    FUIQuestStateArray();
};

