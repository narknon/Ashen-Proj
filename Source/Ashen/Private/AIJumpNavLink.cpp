#include "AIJumpNavLink.h"
#include "Components/SphereComponent.h"

class AAction;
class AActor;

void AAIJumpNavLink::OnTurnToActionStateChanged(const AAction* Source, EActionState Current, EActionState Previous) {
}

void AAIJumpNavLink::JumpLink(AActor* Agent, const FVector& Destination) {
}

AAIJumpNavLink::AAIJumpNavLink() {
    this->JumpApex = CreateDefaultSubobject<USphereComponent>(TEXT("JumpApex"));
    this->JumpTarget = CreateDefaultSubobject<USphereComponent>(TEXT("JumpTarget"));
    this->JumpRootMotionMod = 1.00f;
    this->bForceDrawDebugInEditor = true;
    this->bForceDrawDebugInPIE = false;
    this->SpawnManager = NULL;
    this->bValidJump = false;
}

