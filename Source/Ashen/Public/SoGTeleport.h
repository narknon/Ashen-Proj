#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "SoGTeleport.generated.h"

class AShadowOfGod;
class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API ASoGTeleport : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AShadowOfGod* ShadowOfGod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* TeleportIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* TeleportOutro;
    
public:
    ASoGTeleport();
};

