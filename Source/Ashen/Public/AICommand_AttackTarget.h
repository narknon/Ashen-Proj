#pragma once
#include "CoreMinimal.h"
#include "AICommand.h"
#include "AICommand_AttackTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAICommand_AttackTarget : public UAICommand {
    GENERATED_BODY()
public:
    UAICommand_AttackTarget();
};

