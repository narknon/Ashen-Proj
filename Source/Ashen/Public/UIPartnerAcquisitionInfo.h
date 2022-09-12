#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "ENpcType.h"
#include "ENpcUiAlertState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIPartnerAcquisitionInfo.generated.h"

class AHero;
class UMaterialInterface;
class UCurveFloat;
class AAshenGameState;
class UUIPlayerHud;
class UAshenEventData;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPartnerAcquisitionInfo : public UAshenUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInAtPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureMinPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureMaxPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointsDisplayLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NpcIconParentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* OwningHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType CurrentNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcUiAlertState CurrentNpcState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPlayerHud* ParentHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAshenGameState* AshenGameState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FlashAnimInterpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalFlashAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFlashAnimInterpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentIconFlashTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentFlashGlowBarColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconColourFlashMaxAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InjuredRestingTintAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlashTintOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconTintAnimIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InjuredIconFlashEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalExpandIconAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* IconExpansionScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentIconExpandScale;
    
public:
    UUIPartnerAcquisitionInfo();
    UFUNCTION(BlueprintCallable)
    void OnPositionBuddyPingReceived(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerLost(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerGained(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnBuddyPinnedReceived(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnBuddyDownedReceived(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnAICompanionLost(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnAICompanionGained(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetTintColourAtInterp(float CurrentAlpha) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPartnerMaxHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPartnerHealthAsPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPartnerHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpacity() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckForAdditionToHud();
    
};

