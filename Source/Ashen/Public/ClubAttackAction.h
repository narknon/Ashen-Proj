#pragma once
#include "CoreMinimal.h"
#include "WeaponAttackAction.h"
#include "ClubAttackAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AClubAttackAction : public AWeaponAttackAction {
    GENERATED_BODY()
public:
    AClubAttackAction();
};

