#pragma once
#include "CoreMinimal.h"
#include "BTT_BlockAttackMemory.generated.h"

class AShieldAction;
class AAIHumanoid;

USTRUCT(BlueprintType)
struct FBTT_BlockAttackMemory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AShieldAction> Action;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AAIHumanoid> Humanoid;
    
    ASHEN_API FBTT_BlockAttackMemory();
};

