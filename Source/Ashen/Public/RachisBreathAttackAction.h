#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "RachisBreathAttackAction.generated.h"

class ARachis;

UCLASS(Blueprintable)
class ASHEN_API ARachisBreathAttackAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARachis* Rachis;
    
public:
    ARachisBreathAttackAction();
};

