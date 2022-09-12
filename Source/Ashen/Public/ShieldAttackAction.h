#pragma once
#include "CoreMinimal.h"
#include "WeaponAttackAction.h"
#include "ShieldAttackAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AShieldAttackAction : public AWeaponAttackAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeBlocking;
    
    AShieldAttackAction();
    UFUNCTION(BlueprintCallable)
    void SecondaryInputReleased();
    
    UFUNCTION(BlueprintCallable)
    void HeavyInputReleased();
    
};

