#pragma once
#include "CoreMinimal.h"
#include "QuestConditions.h"
#include "QuestConditionalAkTrigger.generated.h"

USTRUCT(BlueprintType)
struct FQuestConditionalAkTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TriggerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestConditions QuestConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostOnce;
    
    ASHEN_API FQuestConditionalAkTrigger();
};

