#pragma once
#include "CoreMinimal.h"
#include "ItemTalismanBase.h"
#include "ENpcType.h"
#include "UIStatBarData.h"
#include "ItemTalismanProtectorsResolve.generated.h"

class UAshenEventData;
class AActor;
class AHero;
class UVitalAttributes;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanProtectorsResolve : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealthBonusPerNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealhBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeConnected;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfNpcsInTown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHealthBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* NpcActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType CurrentNpcType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionTimer;
    
public:
    UItemTalismanProtectorsResolve();
    UFUNCTION(BlueprintCallable)
    void OnNpcDeath(AActor* _Parent, UVitalAttributes* _Source);
    
    UFUNCTION(BlueprintCallable)
    void OnNpcAcquired(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerLost(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerFinalised(AHero* _NPC, ENpcType _NPCType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHealthBonus();
    
};

