#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EControllerButtons.h"
#include "AshenUserWidget.h"
#include "UiDialogue.generated.h"

class UTextBlock;
class UCanvasPanel;
class ADialogueTree;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUiDialogue : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> DisplayTextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PanelPromptContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PanelPromptYesNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* PositiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* NegativeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADialogueTree* CurrentTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAmbientDialogue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADialogueTree* SummonedDialogue;
    
public:
    UUiDialogue();
    UFUNCTION(BlueprintCallable)
    void StartDialogueTree(TSubclassOf<ADialogueTree> Tree);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDialogueWithOptions(FText SetDisplayText, FText Positive, FText Negative);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDialogue(FText SetDisplayText, bool bUseYesNoPrompt);
    
    UFUNCTION(BlueprintCallable)
    void EndDialogue();
    
    UFUNCTION(BlueprintCallable)
    void ButtonPressed(EControllerButtons _button);
    
};

