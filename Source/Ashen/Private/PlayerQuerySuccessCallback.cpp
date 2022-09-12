#include "PlayerQuerySuccessCallback.h"

int32 UPlayerQuerySuccessCallback::GetValueNow() {
    return 0;
}

FName UPlayerQuerySuccessCallback::GetQueryName() {
    return NAME_None;
}

bool UPlayerQuerySuccessCallback::GetIsUnsavedType() {
    return false;
}

UPlayerQuerySuccessCallback::UPlayerQuerySuccessCallback() {
    this->ValueNow = 0;
    this->UnSavedType = false;
}

