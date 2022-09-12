#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_WantsToIssueCommand.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_WantsToIssueCommand : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_WantsToIssueCommand();
};

