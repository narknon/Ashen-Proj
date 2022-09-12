#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "AICompanionSpawnEventData.generated.h"

class AHero;

UCLASS(Blueprintable)
class ASHEN_API UAICompanionSpawnEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* LocalHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* RemoteHero;
    
public:
    UAICompanionSpawnEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetRemoteHero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetLocalHero();
    
};

