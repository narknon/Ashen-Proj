#pragma once
#include "CoreMinimal.h"
#include "DialogueText.h"
#include "DialogueLine.generated.h"

USTRUCT(BlueprintType)
struct FDialogueLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueText> Line;
    
    ASHEN_API FDialogueLine();
};

