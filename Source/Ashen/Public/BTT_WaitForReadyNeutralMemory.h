#pragma once
#include "CoreMinimal.h"
#include "BTT_WaitForReadyNeutralMemory.generated.h"

class ACreature;

USTRUCT(BlueprintType)
struct FBTT_WaitForReadyNeutralMemory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ACreature> Creature;
    
    ASHEN_API FBTT_WaitForReadyNeutralMemory();
};

