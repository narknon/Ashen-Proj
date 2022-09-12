#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "EAshenDamageType.h"
#include "DownedAction.generated.h"

class AActor;
class UAnimMontage;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API ADownedAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAshenDamageType DownedDamageType;
    
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> SourceActor;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ACreature> RescuingCreature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGiveUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GiveUpTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetUpMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DownedMontage;
    
public:
    ADownedAction();
};

