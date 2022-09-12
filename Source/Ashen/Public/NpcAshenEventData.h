#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "NpcState.h"
#include "ENpcType.h"
#include "NpcAshenEventData.generated.h"

class UTownManager;

UCLASS(Abstract, Blueprintable)
class ASHEN_API UNpcAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTownManager* TownManager;
    
public:
    UNpcAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTownManager* GetTownManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENpcType GetNpcType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNpcState GetNpcState();
    
};

