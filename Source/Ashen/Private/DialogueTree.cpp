#include "DialogueTree.h"

class UUiDialogue;

void ADialogueTree::RunDialogueTree_Implementation() {
}

void ADialogueTree::ProgressDialogueTree(EDialogueOptions SelectedOption) {
}

void ADialogueTree::NewSlide(FText Text, bool bIsYesNo, EDialogueOptions& Choices) {
}

void ADialogueTree::EndTree() {
}

void ADialogueTree::ConfigureTree(UUiDialogue* SetDialogueUiInstance) {
}

ADialogueTree::ADialogueTree() {
    this->DialogueUiInstance = NULL;
}

