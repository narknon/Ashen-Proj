#include "AshenNavLinkProxy.h"

class AActor;
class UStaticMeshComponent;

void AAshenNavLinkProxy::LadderLink(AActor* Agent, const FVector& Destination, FName BottomMountSocket, FName TopMountSocket, UStaticMeshComponent* MeshComponent, uint8 ClimbCount) {
}

AAshenNavLinkProxy::AAshenNavLinkProxy() {
    this->UsageActor = NULL;
}

