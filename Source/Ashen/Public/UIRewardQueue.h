#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "QueuedData.h"
#include "AshenUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ERewardType.h"
#include "RewardItemInfo.h"
#include "UIRewardQueue.generated.h"

class UAkAudioEvent;
class UUIRewardQueueItem;
class UCurveFloat;
class UWidget;
class UItemBase;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIRewardQueue : public UAshenUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIRewardQueueItem> UiQueueItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemTimeOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemFlyOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemFlyInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyInDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyOutRemovedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenQueuedItemDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeBetweenRemovingItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeFirstItemAppears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FadeInCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FadeOutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RewardFlashOpacityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultRewardFlashColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor QuestRewardFlashColour;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* QuestItemPickupAudioEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRewardFlashActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedRewardFlashAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CachedRewardFlashColour;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardItemInfo> RewardItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedData> QueuedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedData> StandbyQueuedData;
    
public:
    UUIRewardQueue();
    UFUNCTION(BlueprintCallable)
    bool ShouldQueueHaveVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveRewardItem(UUIRewardQueueItem* WidgetToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float OnRewardItemAddedEvent(UUIRewardQueueItem* NewWidgetItem, bool bUsingExistingWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueueHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttributeReward(ERewardType RewardType, int32 RewardAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetWidgetToReuse(UUIRewardQueueItem*& RecycledWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetWidgetPositionInVerticalBox(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetWidgetPositionInQueue(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddRewardQueueItem(ERewardType RewardType, int32 RewardAmount, UItemBase* RewardItem, TSubclassOf<UItemBase> ClassOption);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddNextQueueItemToScreen();
    
};

