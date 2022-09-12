#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "BTT_AlertAlliesOfTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_AlertAlliesOfTarget : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSilentAlert;
    
    UBTT_AlertAlliesOfTarget();
};

