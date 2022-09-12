#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ForgoneShouldCrumble.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ForgoneShouldCrumble : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipDistCheck;
    
    UBTD_ForgoneShouldCrumble();
};

