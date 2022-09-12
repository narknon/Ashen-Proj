#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "BTT_ChangeTargetThreat.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_ChangeTargetThreat : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEscalate;
    
    UBTT_ChangeTargetThreat();
};

