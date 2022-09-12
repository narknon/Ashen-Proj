#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "AttackDescription.h"
#include "ThrowAction.generated.h"

class UItemWeapon;

UCLASS(Blueprintable)
class ASHEN_API AThrowAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemWeapon* Weapon;
    
    AThrowAction();
    UFUNCTION(BlueprintCallable)
    void EndAction(const FAttackDescription Attack);
    
};

