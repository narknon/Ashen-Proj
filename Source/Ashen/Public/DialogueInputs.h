#pragma once
#include "CoreMinimal.h"
#include "DialogueInput.h"
#include "DialogueInputs.generated.h"

USTRUCT(BlueprintType)
struct FDialogueInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueInput> Inputs;
    
    ASHEN_API FDialogueInputs();
};

