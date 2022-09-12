#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "BTT_PaziTutorial_MoveTowardsTown.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_PaziTutorial_MoveTowardsTown : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedChangeMinTime;
    
    UBTT_PaziTutorial_MoveTowardsTown();
};

