#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "BTT_PaziPreTutorial_MoveTowardsHorn.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_PaziPreTutorial_MoveTowardsHorn : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndDistanceDropSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndDistanceDropRun;
    
public:
    UBTT_PaziPreTutorial_MoveTowardsHorn();
};

