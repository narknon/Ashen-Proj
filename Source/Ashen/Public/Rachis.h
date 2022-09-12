#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Creature.h"
#include "Rachis.generated.h"

class UAnimMontage;
class ACreatureAbilitiy;

UCLASS(Blueprintable)
class ASHEN_API ARachis : public ACreature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACreatureAbilitiy> BreathActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CliffIdleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CliffClimbMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideSimpleCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadLookBaseBone;
    
    ARachis();
};

