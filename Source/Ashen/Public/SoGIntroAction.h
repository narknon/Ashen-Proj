#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "SoGIntroAction.generated.h"

class AShadowOfGod;

UCLASS(Blueprintable)
class ASHEN_API ASoGIntroAction : public AAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AShadowOfGod* ShadowOfGod;
    
public:
    ASoGIntroAction();
};

