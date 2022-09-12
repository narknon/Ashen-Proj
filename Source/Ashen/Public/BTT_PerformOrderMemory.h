#pragma once
#include "CoreMinimal.h"
#include "BTT_PerformOrderMemory.generated.h"

class UAIOrder;
class ACreature;

USTRUCT(BlueprintType)
struct FBTT_PerformOrderMemory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UAIOrder> Order;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ACreature> Creature;
    
    ASHEN_API FBTT_PerformOrderMemory();
};

