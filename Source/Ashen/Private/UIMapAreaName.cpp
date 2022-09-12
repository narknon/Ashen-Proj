#include "UIMapAreaName.h"

class UAshenStateSave;

void UUIMapAreaName::SetText(FText AreaText) {
}

void UUIMapAreaName::SetNewAndVisiblity(FName AreaName, UAshenStateSave* StateData, bool Clear, bool Invisible) {
}

UUIMapAreaName::UUIMapAreaName() {
    this->NewImageRef = NULL;
    this->AreaTextRef = NULL;
    this->AreaText2Ref = NULL;
}

