#include "UISystemNotification.h"


UUISystemNotification::UUISystemNotification() : UUserWidget(FObjectInitializer::Get()) {
    this->LifetimeSeconds = 5.00f;
    this->bFadingOut = false;
}

