#pragma once
#include "CoreMinimal.h"
#include "UIPhase2MenuTab.h"
#include "ECompassDirs.h"
#include "EUIPopupQueType.h"
#include "UIPhase2OverlayTab.generated.h"

class UUIPhase2Menu;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPhase2OverlayTab : public UUIPhase2MenuTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIPopupQueType PopupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompassDirs PendingFadeDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountDownTimer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FadeOutPending;
    
public:
    UUIPhase2OverlayTab();
    UFUNCTION(BlueprintCallable)
    void UpdateFunc(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupFunc(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DissableTempFade);
    
    UFUNCTION(BlueprintCallable)
    void OfficalCloseAfter(ECompassDirs Dir, float TimeTillFade);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutTabTemp(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutTab2Close(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable)
    void FadeInTabFromTemp(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable)
    void FadeInTabFromClose(ECompassDirs Dir);
    
};

