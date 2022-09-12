#pragma once
#include "CoreMinimal.h"
#include "ETutorialCondition.h"
#include "TutorialQuery.generated.h"

USTRUCT(BlueprintType)
struct FTutorialQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool State;
    
    ASHEN_API FTutorialQuery();
};

