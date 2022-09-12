#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "MultiplayerFinalisedAshenEventData.generated.h"

class AHero;

UCLASS(Blueprintable)
class ASHEN_API UMultiplayerFinalisedAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* LocalHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* RemoteHero;
    
public:
    UMultiplayerFinalisedAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetRemoteHero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetLocalHero();
    
};

