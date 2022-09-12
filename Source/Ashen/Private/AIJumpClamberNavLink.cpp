#include "AIJumpClamberNavLink.h"
#include "Components/SphereComponent.h"

class AAction;
class AActor;

void AAIJumpClamberNavLink::OnTurnToActionStateChanged(const AAction* Source, EActionState Current, EActionState Previous) {
}

void AAIJumpClamberNavLink::JumpClamberLink(AActor* Agent, const FVector& Destination) {
}

AAIJumpClamberNavLink::AAIJumpClamberNavLink() {
    this->JumpApex = CreateDefaultSubobject<USphereComponent>(TEXT("JumpApex"));
    this->JumpTarget = CreateDefaultSubobject<USphereComponent>(TEXT("JumpTarget"));
    this->bForceDrawDebugInEditor = true;
    this->bForceDrawDebugInPIE = false;
    this->ClamberRadius = 40.00f;
    this->ClamberHalfHeight = 80.00f;
    this->ClamberHeightCheckMaxLimit = 200.00f;
    this->ClamberHeightCheckMinLimit = 20.00f;
    this->NavLinkOffset = 50.00f;
    this->MaxCapsuleSize = 200.00f;
    this->SpawnManager = NULL;
    this->bValidJumpClamber = false;
}

