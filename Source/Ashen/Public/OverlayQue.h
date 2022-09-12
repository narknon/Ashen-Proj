#pragma once
#include "CoreMinimal.h"
#include "OverlayDialogueInput.h"
#include "OverlayTutorialInput.h"
#include "OverlayTownPersonInput.h"
#include "OverlayItemInput.h"
#include "OverlayTextInput.h"
#include "OverlayQue.generated.h"

USTRUCT(BlueprintType)
struct FOverlayQue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayDialogueInput> DialogueQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayTutorialInput> TutorialQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayItemInput> ItemQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayTownPersonInput> TownPersonQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayTextInput> ZoneQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayTextInput> GeneralTextQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayTextInput> SecretQue;
    
    ASHEN_API FOverlayQue();
};

