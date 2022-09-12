#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIQuestInstructionRecap.generated.h"

class UAshenEventData;
class UCurveLinearColor;
class UCurveFloat;
class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIQuestInstructionRecap : public UAshenUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateFlashDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateFlashInitialAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* HighlightColourCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EdgeHighlightAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyInDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompasssPointLockTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedUpdateFlashAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CachedBackgroundHighlightColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WidgetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedEdgeHighlightOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* QuestUpdatedAudioEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFlashOnUpdate;
    
    UUIQuestInstructionRecap();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateQuestInstructionRecap(bool bDisplayUpdateFlash);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowUpdateVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateFlashEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedNpcChanged(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestStateChange(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LockCompass();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayUpdateFlash();
    
};

