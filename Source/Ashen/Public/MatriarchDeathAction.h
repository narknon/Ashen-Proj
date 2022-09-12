#pragma once
#include "CoreMinimal.h"
#include "DeathAction.h"
#include "MatriarchDeathAction.generated.h"

class AMatriarch;

UCLASS(Blueprintable)
class ASHEN_API AMatriarchDeathAction : public ADeathAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMatriarch* Matriarch;
    
public:
    AMatriarchDeathAction();
};

