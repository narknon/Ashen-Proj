#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "ENpcType.h"
#include "NPCExtraHealthBarEvent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UNPCExtraHealthBarEvent : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType NpcType;
    
public:
    UNPCExtraHealthBarEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldShowHealthBar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENpcType GetNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercentage();
    
};

