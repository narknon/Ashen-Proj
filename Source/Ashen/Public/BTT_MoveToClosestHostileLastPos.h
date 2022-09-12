#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "BTT_MoveToClosestHostileLastPos.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_MoveToClosestHostileLastPos : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuzzyRadius;
    
    UBTT_MoveToClosestHostileLastPos();
};

