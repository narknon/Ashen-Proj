#pragma once
#include "CoreMinimal.h"
#include "BTT_Action.h"
#include "Engine/DataTable.h"
#include "BTT_MatriarchBoneBrokenAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API UBTT_MatriarchBoneBrokenAction : public UBTT_Action {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BoneBrokenAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontPlayIntroIfBoneIsDead;
    
    UBTT_MatriarchBoneBrokenAction();
};

