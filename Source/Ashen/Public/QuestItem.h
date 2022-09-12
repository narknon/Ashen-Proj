#pragma once
#include "CoreMinimal.h"
#include "ItemDescription.h"
#include "EQuestItem.h"
#include "QuestItem.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FQuestItem : public FItemDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestItem QuestItemID;
    
    FQuestItem();
};

