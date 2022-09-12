#include "InteractiveQueueComponent.h"

class AAshenPlayerController;
class UInteraction;

void UInteractiveQueueComponent::NextInteractive(UInteraction*& Front) {
}

bool UInteractiveQueueComponent::IsEnabled() {
    return false;
}

void UInteractiveQueueComponent::Interact(bool _aPressed, AAshenPlayerController* Controller) {
}

void UInteractiveQueueComponent::GetNext(UInteraction*& Next) {
}

void UInteractiveQueueComponent::GetFrontInteractions(UInteraction*& _aInteraction, UInteraction*& _yInteraction, UInteraction*& _AlertInteraction) {
}

void UInteractiveQueueComponent::GetFront(UInteraction*& Front, bool& HasNext) {
}

UInteractiveQueueComponent::UInteractiveQueueComponent() {
    this->PreviousFront = NULL;
    this->bDisableQueue = false;
}

