#include "AttackSetTransitionMetaData.h"

void UAttackSetTransitionMetaData::RefreshTransitionRules() const {
}

int32 UAttackSetTransitionMetaData::GetTranstionRulesWithSubStr(const FString& SubStr, TArray<FAttackTransitionRules>& Container) const {
    return 0;
}

int32 UAttackSetTransitionMetaData::GetNumTranstionRulesWithSubStr(const FString& SubStr) const {
    return 0;
}

UAttackSetTransitionMetaData::UAttackSetTransitionMetaData() {
    this->AttackSetMontage = NULL;
}

