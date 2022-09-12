#pragma once
#include "CoreMinimal.h"
#include "DeathAction.h"
#include "SoGDeathAction.generated.h"

class AShadowOfGod;

UCLASS(Blueprintable)
class ASHEN_API ASoGDeathAction : public ADeathAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShadowOfGod* ShadowOfGod;
    
public:
    ASoGDeathAction();
};

