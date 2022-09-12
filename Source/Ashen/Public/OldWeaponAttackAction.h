#pragma once
#include "CoreMinimal.h"
#include "AttackActionBase.h"
#include "AttackDescription.h"
#include "OldWeaponAttackAction.generated.h"

class AHero;

UCLASS(Blueprintable)
class ASHEN_API AOldWeaponAttackAction : public AAttackActionBase {
    GENERATED_BODY()
public:
    AOldWeaponAttackAction();
    UFUNCTION(BlueprintCallable)
    bool ContinueAttack(const FAttackDescription& AttackDesc, AHero* Hero);
    
};

