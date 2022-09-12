#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_HostilesSighted.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTDecorator_HostilesSighted : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLostSightMax;
    
public:
    UBTDecorator_HostilesSighted();
};

