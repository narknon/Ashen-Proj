#pragma once
#include "CoreMinimal.h"
#include "EnvJumpScareRules.generated.h"

class AAITrigger;

USTRUCT(BlueprintType)
struct ASHEN_API FEnvJumpScareRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAITrigger* Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnCreatureWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnCreatureRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnCreatureSprinting;
    
    FEnvJumpScareRules();
};

