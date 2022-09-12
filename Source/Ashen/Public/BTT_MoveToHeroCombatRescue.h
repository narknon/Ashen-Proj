#pragma once
#include "CoreMinimal.h"
#include "BTT_MoveToHeroRescue.h"
#include "BTT_MoveToHeroCombatRescue.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_MoveToHeroCombatRescue : public UBTT_MoveToHeroRescue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintConeHalfAngle;
    
    UBTT_MoveToHeroCombatRescue();
};

