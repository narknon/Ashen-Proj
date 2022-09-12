#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "HumanoidPodIdleAction.generated.h"

class UAnimMontage;
class AAISpawnHumanoidPod;

UCLASS(Blueprintable)
class ASHEN_API AHumanoidPodIdleAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PopMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAISpawnHumanoidPod* PodSpawner;
    
public:
    AHumanoidPodIdleAction();
};

