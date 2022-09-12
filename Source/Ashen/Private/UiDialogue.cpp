#include "UiDialogue.h"
#include "Templates/SubclassOf.h"

class ADialogueTree;

void UUiDialogue::StartDialogueTree(TSubclassOf<ADialogueTree> Tree) {
}

void UUiDialogue::SetCurrentDialogueWithOptions(FText SetDisplayText, FText Positive, FText Negative) {
}

void UUiDialogue::SetCurrentDialogue(FText SetDisplayText, bool bUseYesNoPrompt) {
}

void UUiDialogue::EndDialogue() {
}

void UUiDialogue::ButtonPressed(EControllerButtons _button) {
}

UUiDialogue::UUiDialogue() {
    this->DisplayText = NULL;
    this->PanelPromptContinue = NULL;
    this->PanelPromptYesNo = NULL;
    this->PositiveText = NULL;
    this->NegativeText = NULL;
    this->CurrentTree = NULL;
    this->bIsAmbientDialogue = false;
    this->SummonedDialogue = NULL;
}

