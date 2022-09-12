#pragma once
#include "CoreMinimal.h"
#include "DialogueSettings.h"
#include "DialogueText.generated.h"

USTRUCT(BlueprintType)
struct FDialogueText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DialogueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueSettings Settings;
    
    ASHEN_API FDialogueText();
};

