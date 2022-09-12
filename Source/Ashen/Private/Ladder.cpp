#include "Ladder.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

class UInteraction;
class ACreature;
class UObject;

void ALadder::TopLadderCallback(UInteraction* Source, ACreature* Target) {
}

TArray<UInteraction*> ALadder::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

void ALadder::BottomLadderCallback(UInteraction* Source, ACreature* Target) {
}

ALadder::ALadder() {
    this->TopLadderInteraction = NULL;
    this->BottomLadderInteraction = NULL;
    this->LadderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LadderMesh"));
    this->TopTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TopTrigger"));
    this->TopArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("TopArrow"));
    this->BottomTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BottomTrigger"));
    this->BottomArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("BottomArrow"));
    this->ClimbsBeforeDismount = 0;
    this->LadderNavLinkClass = NULL;
    this->TopMountSocket = TEXT("TopMount");
    this->BottomMountSocket = TEXT("BottomMount");
    this->MaxInteractionDegrees = 45.00f;
    this->AINavLink = NULL;
}

