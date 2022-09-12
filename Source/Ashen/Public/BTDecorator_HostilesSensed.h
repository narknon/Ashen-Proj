#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EAIPerceptionSense.h"
#include "BTDecorator_HostilesSensed.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTDecorator_HostilesSensed : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIPerceptionSense MinLevel;
    
    UBTDecorator_HostilesSensed();
};

