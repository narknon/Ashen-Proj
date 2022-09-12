#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "SummonGefnCallbackDelegate.h"
#include "ScionSummonGefnAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API AScionSummonGefnAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonGefnCallback SummonGefnCallbackHandle;
    
    AScionSummonGefnAction();
};

