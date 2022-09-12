#include "ActionProxy.h"

UActionProxy::UActionProxy() {
    this->bDisableUntilActionDone = true;
    this->bEnabled = true;
    this->ActionClass = NULL;
    this->Montage = NULL;
    this->Type = EActionType::None;
    this->InheritLocation = false;
    this->InheritDirection = false;
    this->MovementMode = MOVE_None;
    this->CustomMode = ECustomMovementMode::CUSTOM_None;
    this->ObservedAction = NULL;
}

