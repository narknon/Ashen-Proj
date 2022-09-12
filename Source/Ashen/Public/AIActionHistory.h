#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIActionHistory.generated.h"

class AAction;

USTRUCT(BlueprintType)
struct ASHEN_API FAIActionHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAction> ActionClass;
    
    FAIActionHistory();
};

