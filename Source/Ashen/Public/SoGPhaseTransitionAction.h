#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "SoGPhaseTransitionAction.generated.h"

class AShadowOfGod;

UCLASS(Blueprintable)
class ASHEN_API ASoGPhaseTransitionAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AShadowOfGod* ShadowOfGod;
    
public:
    ASoGPhaseTransitionAction();
};

