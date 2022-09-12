#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "BTT_DrawPrimaryWeapon.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_DrawPrimaryWeapon : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSucceedIfNoAvailableWeapons;
    
    UBTT_DrawPrimaryWeapon();
};

