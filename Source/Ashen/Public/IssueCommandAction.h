#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "IssueCommandAction.generated.h"

class UAICommand;

UCLASS(Blueprintable)
class ASHEN_API AIssueCommandAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UAICommand> Command;
    
    AIssueCommandAction();
};

