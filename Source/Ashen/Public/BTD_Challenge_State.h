#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAIChallangeContextState.h"
#include "BTD_Challenge_State.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Challenge_State : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIChallangeContextState IsCurrentState;
    
    UBTD_Challenge_State();
};

