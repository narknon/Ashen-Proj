#include "ProtectorTalismanBuffEffect.h"

void UProtectorTalismanBuffEffect::UpdateTalisman() {
}

void UProtectorTalismanBuffEffect::OnInflictDamage(FAshenDamage& AshenDamage, bool& TestSample) {
}

UProtectorTalismanBuffEffect::UProtectorTalismanBuffEffect() {
    this->TalismanOwner = NULL;
    this->PartnerAttributesToMonitor = NULL;
    this->HealthPercentageThreshold = 0.00f;
    this->PoiseDamageMultiplier = 0.00f;
}

