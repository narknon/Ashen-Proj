#include "AshenAIContext_Guardian.h"

class ACreature;
class AAITrigger;

void UAshenAIContext_Guardian::OnCancelTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger) {
}

UAshenAIContext_Guardian::UAshenAIContext_Guardian() {
    this->GuardLootItem = NULL;
    this->bCancelOnGroupAlert = true;
    this->ForceWakeOnBreakGuard = 5.00f;
}

