#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "AshenDamage.h"
#include "ScagSurfaceClingIdleAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AScagSurfaceClingIdleAction : public AAction {
    GENERATED_BODY()
public:
    AScagSurfaceClingIdleAction();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FAshenDamage& Damage);
    
};

