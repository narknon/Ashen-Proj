#pragma once
#include "CoreMinimal.h"
#include "AIPinAttackBase.h"
#include "ScagSpitPinAttackAction.generated.h"

class AScagEx;

UCLASS(Blueprintable)
class ASHEN_API AScagSpitPinAttackAction : public AAIPinAttackBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AScagEx* Scag;
    
public:
    AScagSpitPinAttackAction();
};

