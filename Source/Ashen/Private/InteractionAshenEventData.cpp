#include "InteractionAshenEventData.h"

class AActor;
class AHero;

AHero* UInteractionAshenEventData::GetInteractor() {
    return NULL;
}

EInteractionEventType UInteractionAshenEventData::GetInteractionType() {
    return EInteractionEventType::Open;
}

AActor* UInteractionAshenEventData::GetInteractedActor() {
    return NULL;
}

UInteractionAshenEventData::UInteractionAshenEventData() {
    this->InteractedActor = NULL;
    this->Interactor = NULL;
}

