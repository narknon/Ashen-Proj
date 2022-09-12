#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_SetBlockHeroTargeting.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_SetBlockHeroTargeting : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlock;
    
    UBTT_SetBlockHeroTargeting();
};

