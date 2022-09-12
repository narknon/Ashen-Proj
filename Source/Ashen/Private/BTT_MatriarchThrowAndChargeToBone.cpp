#include "BTT_MatriarchThrowAndChargeToBone.h"

UBTT_MatriarchThrowAndChargeToBone::UBTT_MatriarchThrowAndChargeToBone() {
    this->ChargeRunMontage = NULL;
    this->ChargeAttackMontage = NULL;
    this->PickupBoneStartMontage = NULL;
    this->PickupBoneEndMontage = NULL;
    this->ChargeTurnRateMultiplier = 1.00f;
    this->MinimumDistanceToTarget = 0.00f;
    this->MaximumAngle = 0.00f;
    this->ChargeAction = NULL;
}

