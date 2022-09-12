#pragma once
#include "CoreMinimal.h"
#include "AIHumanoid.h"
#include "DoorMaiden.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API ADoorMaiden : public AAIHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DoorDisarmL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DoorDisarmR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DoorDisarmIdle;
    
    ADoorMaiden();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncDisarmState(bool bDisarmed);
    
};

