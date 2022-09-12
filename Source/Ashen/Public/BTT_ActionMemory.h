#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BTT_ActionMemory.generated.h"

class AAction;
class AAshenAIControllerBase;
class ACreature;

USTRUCT(BlueprintType)
struct FBTT_ActionMemory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AAction> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ActionGuid;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ACreature> ThisCreature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshenAIControllerBase* ThisController;
    
    ASHEN_API FBTT_ActionMemory();
};

