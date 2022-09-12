#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenTurnTo.h"
#include "BTT_Matriarch_TurnToBone.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_Matriarch_TurnToBone : public UBTT_AshenTurnTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationOffset;
    
    UBTT_Matriarch_TurnToBone();
};

