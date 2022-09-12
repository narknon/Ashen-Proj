#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EInputUIEventTypes.h"
#include "EInputPressType.h"
#include "UIPhase2Menu.generated.h"

class AHero;
class UUIPhase2MenuTab;
class UAkAudioEvent;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPhase2Menu : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LateralFadeinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LateralBaseTabDisplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalTextColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OverlapTextColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DissabledTextColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TabScaleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PauseTabFadeins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MenuWidgetColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PositionBlendFromClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PositionBlendToClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AlphaBlendFromClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AlphaBlendToClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AlphaBlendTempFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AlphaBlendTempFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchedFromMenuOnConstruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GlobalTabDisplacment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIPhase2MenuTab*> OpenTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIPhase2MenuTab*> ExtraTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIPhase2MenuTab*> GeneratedTabs;
    
    UUIPhase2Menu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnMenuTab(TSubclassOf<UUIPhase2MenuTab> ClassToGenerate, TSubclassOf<UUIPhase2MenuTab> XboxOneClass, TSubclassOf<UUIPhase2MenuTab> XboxOneXClass, TSubclassOf<UUIPhase2MenuTab> PS4Class, TSubclassOf<UUIPhase2MenuTab> PS4ProClass, bool StationaryTab, bool DissableTempFading, UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetLastUsedFocusValue(UClass* Class, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveMenuTab(UUIPhase2MenuTab* tabRef);
    
    UFUNCTION(BlueprintCallable)
    void RecieveInteractionInput(const AHero* Hero, EInputUIEventTypes PressEvent, EInputPressType PressType);
    
    UFUNCTION(BlueprintCallable)
    void RecieveControlInput(const FVector2D& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddedToHud();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastUsedFocusValue(UClass* Class, bool& HadValue);
    
    UFUNCTION(BlueprintCallable)
    UUIPhase2MenuTab* GetLastOpenTabOfClass(TSubclassOf<UUIPhase2MenuTab> Class);
    
};

