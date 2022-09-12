#pragma once
#include "CoreMinimal.h"
#include "QuestStateTag.generated.h"

USTRUCT(BlueprintType)
struct FQuestStateTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    ASHEN_API FQuestStateTag();
};

