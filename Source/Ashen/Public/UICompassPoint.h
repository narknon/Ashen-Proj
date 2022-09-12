#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UICompassPoint.generated.h"

class UUICompass;
class AQuestPathfindingPoint;
class UImage;
class AQuestPoint;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUICompassPoint : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestPoint* QuestPointOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestPathfindingPoint* PathFindingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUICompass* CompassRefrence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompassPointAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompassPointEdgeAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InTownType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UImage* ImageWidget;
    
public:
    UUICompassPoint();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIconType();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFunction(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupInZoneAndAlpha(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition();
    
    UFUNCTION(BlueprintCallable)
    void SetIconType(bool InTown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAreaExitAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAreaEntryAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAddAnim();
    
    UFUNCTION(BlueprintCallable)
    bool OverridePlayerLocationWithLockedValue(FVector& Location);
    
};

