#pragma once
#include "CoreMinimal.h"
#include "QuestConditions.h"
#include "QuestConditionalAkPair.generated.h"

USTRUCT(BlueprintType)
struct FQuestConditionalAkPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestConditions QuestConditions;
    
    ASHEN_API FQuestConditionalAkPair();
};

