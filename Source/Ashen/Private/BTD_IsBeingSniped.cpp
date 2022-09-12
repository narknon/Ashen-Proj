#include "BTD_IsBeingSniped.h"

UBTD_IsBeingSniped::UBTD_IsBeingSniped() {
    this->LastDamageTimeLimit = 30.00f;
    this->LeashCheckExtension = 500.00f;
    this->MinPathlessDistance = 1000.00f;
}

