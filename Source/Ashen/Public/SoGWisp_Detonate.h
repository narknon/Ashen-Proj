#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "SoGWisp_Detonate.generated.h"

class AAshWraith;

UCLASS(Blueprintable)
class ASHEN_API ASoGWisp_Detonate : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshWraith* AshWraith;
    
public:
    ASoGWisp_Detonate();
};

