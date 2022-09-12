#include "OverlapProxyHitTracking.h"

class AActor;
class UPrimitiveComponent;

void UOverlapProxyHitTracking::OnOverlap(UPrimitiveComponent* ThisComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UOverlapProxyHitTracking::UOverlapProxyHitTracking() {
    this->Action = NULL;
    this->IsPartOfMultipleOverlapAttack = false;
}

