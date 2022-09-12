#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIQuestNotification.generated.h"

class UCurveFloat;
class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIQuestNotification : public UAshenUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NotificationOpacityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NotificationScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CachedTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CachedQuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedWidgetOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CachedTitleColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CachedDesiredScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestCompleteEffectDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestCompleteNotificationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestCompleteRecapTextLockDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestStartedRecapTextLockDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenFlashDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenFlashInitialOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* QuestAcceptedAudioEvent;
    
public:
    UUIQuestNotification();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerScreenFlash(float Duration, float InitialOpacity);
    
    UFUNCTION(BlueprintCallable)
    void ShowAsQuestStarted(const FText& QuestName);
    
    UFUNCTION(BlueprintCallable)
    void ShowAsQuestComplete(const FText& QuestName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableNotificationDisplay();
    
};

