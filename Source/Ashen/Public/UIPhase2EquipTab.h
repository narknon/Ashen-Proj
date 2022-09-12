#pragma once
#include "CoreMinimal.h"
#include "UIPhase2OverlayTab.h"
#include "UObject/NoExportTypes.h"
#include "UIPhase2EquipTab.generated.h"

class UAshenUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPhase2EquipTab : public UUIPhase2OverlayTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndexSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealtimeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenUserWidget* GlowPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntroTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntroTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UUIPhase2EquipTab();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressFunction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseEquipTab();
    
};

