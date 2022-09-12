#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemTalismanBase.h"
#include "ENpcType.h"
#include "UIStatBarData.h"
#include "ItemTalismanAmity.generated.h"

class UAmityTalismanBuffEffect;
class UAshenEventData;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanAmity : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmityTalismanBuffEffect> AmityBuffEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFromParter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDamageResistancePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResistanceIncreasePerSecond;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAmityTalismanBuffEffect* TalismanBuffEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* NpcPartner;
    
public:
    UItemTalismanAmity();
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerLost(UAshenEventData* AshenEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerFinalised(AHero* NPC, ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

