#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CameraHandlingAction.h"
#include "ReviveAsAshwraithAction.generated.h"

class UAnimMontage;
class AWakeRelicDummyActor;

UCLASS(Blueprintable)
class ASHEN_API AReviveAsAshwraithAction : public ACameraHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RespawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWakeRelicDummyActor> DummyActorClass;
    
    AReviveAsAshwraithAction();
};

