#include "AshenDialogueAction.h"

class UUIPhase2MenuTab;
class UAshenDialogueAction;
class UDialogueComponent;

void UAshenDialogueAction::UIButtonCallback(UUIPhase2MenuTab* Tab, EInputUIEventTypes Button) {
}

UAshenDialogueAction* UAshenDialogueAction::DisplayDialogue(UDialogueComponent* NewDialogueComponent, FText Text, EDialogueTone Tone, bool bPlayTalkingAnimation) {
    return NULL;
}

UAshenDialogueAction::UAshenDialogueAction() {
    this->DialogueComponent = NULL;
}

