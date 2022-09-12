#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "BTT_Forgone_CancelAmbush.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_Forgone_CancelAmbush : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipDelay;
    
    UBTT_Forgone_CancelAmbush();
};

