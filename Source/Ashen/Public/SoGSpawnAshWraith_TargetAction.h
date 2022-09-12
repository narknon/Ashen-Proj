#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "SoGSpawnAshWraith_TargetAction.generated.h"

class AShadowOfGod;

UCLASS(Blueprintable)
class ASHEN_API ASoGSpawnAshWraith_TargetAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AShadowOfGod* FromGod;
    
    ASoGSpawnAshWraith_TargetAction();
};

