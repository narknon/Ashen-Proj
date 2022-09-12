#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "AICompanionDespawnEventData.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UAICompanionDespawnEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromDeath;
    
public:
    UAICompanionDespawnEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidDespawnFromDeath() const;
    
};

