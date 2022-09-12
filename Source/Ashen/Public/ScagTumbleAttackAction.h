#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "ScagTumbleAttackAction.generated.h"

class AAIContextMarker;
class AScagEx;

UCLASS(Blueprintable)
class ASHEN_API AScagTumbleAttackAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIContextMarker* TumbleToMarker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDidLand;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AScagEx* Scag;
    
public:
    AScagTumbleAttackAction();
};

