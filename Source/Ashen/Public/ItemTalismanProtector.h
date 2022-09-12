#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemTalismanBase.h"
#include "ENpcType.h"
#include "UIStatBarData.h"
#include "ItemTalismanProtector.generated.h"

class UProtectorTalismanBuffEffect;
class UAshenEventData;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API UItemTalismanProtector : public UItemTalismanBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UProtectorTalismanBuffEffect> ProtectorBuffEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartnerPercentageHealthRequired;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProtectorTalismanBuffEffect* TalismanBuffEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* NpcPartner;
    
public:
    UItemTalismanProtector();
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerNpcSelected(AHero* NPC, ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable)
    void OnCompanionLost(UAshenEventData* AshenEventData);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

