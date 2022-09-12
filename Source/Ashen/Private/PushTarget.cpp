#include "PushTarget.h"

void UPushTarget::Push(const FVector& Direction) {
}

void UPushTarget::Client_Push_Implementation(FVector Direction, float Distance) {
}

UPushTarget::UPushTarget() {
    this->DecayTime = 0.20f;
    this->MaxPushTime = 0.30f;
    this->Magnitude = 200.00f;
}

