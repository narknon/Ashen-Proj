#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "DeathAction.generated.h"

class USkeletalMeshComponent;
class ALootActor;

UCLASS(Blueprintable)
class ASHEN_API ADeathAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool PlayDeathAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceKillOnStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALootActor* LootActor;
    
public:
    ADeathAction();
};

