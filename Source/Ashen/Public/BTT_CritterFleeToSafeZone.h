#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "BTT_CritterFleeToSafeZone.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_CritterFleeToSafeZone : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetargetOnAngleToHostiles;
    
    UBTT_CritterFleeToSafeZone();
};

