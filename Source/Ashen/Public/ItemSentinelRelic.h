#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemRelicBase.h"
#include "QuestStateTag.h"
#include "UIStatBarData.h"
#include "ItemSentinelRelic.generated.h"

class UGuardiansPactRelicBuffEffect;
class USkeletalMesh;
class UQuestLine;
class AHero;
class UAshenEventData;
class ARelicPhysicalItem;

UCLASS(Blueprintable)
class ASHEN_API UItemSentinelRelic : public UItemRelicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGuardiansPactRelicBuffEffect> BrokenWingBuffEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGuardiansPactRelicBuffEffect> FixedWingBuffEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrokenBuffEffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullBuffEffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FullWingsMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BrokenWingsMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* FullWingsQuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestStateTag FullWingsQuestStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARelicPhysicalItem* SentinelWingsItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGuardiansPactRelicBuffEffect* ActiveBuffEffect;
    
public:
    UItemSentinelRelic();
    UFUNCTION(BlueprintCallable)
    void OnQuestStateChange(UAshenEventData* AshenEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFullWingsCreated(AHero* _Hero);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBrokenWingsCreated(AHero* _Hero);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
};

