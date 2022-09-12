#include "Interaction.h"

class ACreature;
class AActor;
class UInteraction;

void UInteraction::Interact(ACreature* Target) {
}

void UInteraction::GetMessageText(FText& _Left, FText& _Icon, FText& _Right) {
}

UInteraction* UInteraction::CreateBlueprintInteraction(AActor* NewOwner, FText Text) {
    return NULL;
}

UInteraction::UInteraction() {
    this->Owner = NULL;
    this->Context = NULL;
    this->AlertColours = false;
    this->Type = EInteractionType::None;
}

