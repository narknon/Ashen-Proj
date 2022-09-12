#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvJumpScareRules.h"
#include "EnvJumpScare.generated.h"

class USkeletalMeshComponent;
class ACreature;
class UAnimMontage;
class AAITrigger;

UCLASS(Blueprintable)
class ASHEN_API AEnvJumpScare : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvJumpScareRules> ScareRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> ScareMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnFireCD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnFailFireCD;
    
    AEnvJumpScare();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
};

