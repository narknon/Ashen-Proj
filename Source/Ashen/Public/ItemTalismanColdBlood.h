#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemTalismanBase.h"
#include "ENpcType.h"
#include "EActionState.h"
#include "UIStatBarData.h"
#include "ItemTalismanColdBlood.generated.h"

class UColdBloodTalismanBuffEffect;
class AActor;
class AHero;
class UVitalAttributes;
class AAction;
class UAshenEventData;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanColdBlood : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePerCompanionDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UColdBloodTalismanBuffEffect> ColdBloodBuffEffectClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* RemoteHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType CurrentNpcType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UColdBloodTalismanBuffEffect* TalismanBuffEffect;
    
public:
    UItemTalismanColdBlood();
    UFUNCTION(BlueprintCallable)
    void OnRestedAtSaveStone();
    
    UFUNCTION(BlueprintCallable)
    void OnNpcDeath(AActor* _Parent, UVitalAttributes* _Source);
    
    UFUNCTION(BlueprintCallable)
    void OnNpcActionStateChanged(const AAction* Source, EActionState Current, EActionState Previous);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerNpcSelected(AHero* _NPC, ENpcType _NPCType);
    
    UFUNCTION(BlueprintCallable)
    void OnCompanionDespawn(UAshenEventData* AshenEventData);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

