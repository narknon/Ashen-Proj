#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenTurnToMemory.generated.h"

class AAction;
class AAshenAIControllerBase;
class ACreature;

USTRUCT(BlueprintType)
struct FBTT_AshenTurnToMemory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AAction> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* ThisCreature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshenAIControllerBase* ThisController;
    
    ASHEN_API FBTT_AshenTurnToMemory();
};

