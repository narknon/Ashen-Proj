#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "WeaponReloadAction.generated.h"

class UItemAIWeapon;

UCLASS(Blueprintable)
class ASHEN_API AWeaponReloadAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemAIWeapon* Weapon;
    
public:
    AWeaponReloadAction();
};

