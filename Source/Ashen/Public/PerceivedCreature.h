#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerceivedCreature.generated.h"

class UAnimMontage;
class ACreature;
class AAttackActionRoot;

UCLASS(Blueprintable)
class ASHEN_API UPerceivedCreature : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* Creature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAttackActionRoot* AttackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastEmoteMontage;
    
public:
    UPerceivedCreature();
};

