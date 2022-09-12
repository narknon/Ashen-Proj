#include "QuestActor.h"
#include "Components/StaticMeshComponent.h"
#include "DialogueComponent.h"

AQuestActor::AQuestActor() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->DialogueComponent = CreateDefaultSubobject<UDialogueComponent>(TEXT("DialogueComponent"));
}

