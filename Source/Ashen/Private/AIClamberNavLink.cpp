#include "AIClamberNavLink.h"

class AAction;
class AActor;

void AAIClamberNavLink::OnTurnToActionStateChanged(const AAction* Source, EActionState Current, EActionState Previous) {
}

void AAIClamberNavLink::ClamberLink(AActor* Agent, const FVector& Destination) {
}

AAIClamberNavLink::AAIClamberNavLink() {
    this->bForceDrawDebugInEditor = false;
    this->bForceDrawDebugInPIE = false;
    this->bAutoCreateJumpLinkDown = false;
    this->AutoJumpLinkClass = NULL;
    this->ClamberRadius = 40.00f;
    this->ClamberHeightCheckMaxLimit = 251.00f;
    this->ClamberHeightCheckMinLimit = 50.00f;
    this->NavLinkOffset = 50.00f;
    this->MaxCapsuleSize = 200.00f;
    this->ChildJumpDownLink = NULL;
    this->SpawnManager = NULL;
    this->bValidClamber = false;
}

