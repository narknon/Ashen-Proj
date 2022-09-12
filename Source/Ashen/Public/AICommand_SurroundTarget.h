#pragma once
#include "CoreMinimal.h"
#include "AICommand.h"
#include "AICommand_SurroundTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAICommand_SurroundTarget : public UAICommand {
    GENERATED_BODY()
public:
    UAICommand_SurroundTarget();
};

