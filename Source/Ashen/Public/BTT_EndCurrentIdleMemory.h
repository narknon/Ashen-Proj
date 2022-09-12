#pragma once
#include "CoreMinimal.h"
#include "BTT_EndCurrentIdleMemory.generated.h"

class AIdleAction;
class ACreature;

USTRUCT(BlueprintType)
struct FBTT_EndCurrentIdleMemory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AIdleAction> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* Creature;
    
    ASHEN_API FBTT_EndCurrentIdleMemory();
};

