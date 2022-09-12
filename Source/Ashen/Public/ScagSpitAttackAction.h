#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "ScagSpitAttackAction.generated.h"

class AScagEx;

UCLASS(Blueprintable)
class ASHEN_API AScagSpitAttackAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AScagEx* Scag;
    
public:
    AScagSpitAttackAction();
};

