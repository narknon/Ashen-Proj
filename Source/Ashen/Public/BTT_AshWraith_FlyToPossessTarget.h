#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "BTT_AshWraith_FlyToPossessTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_AshWraith_FlyToPossessTarget : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdatePathOnTickInterval;
    
    UBTT_AshWraith_FlyToPossessTarget();
};

