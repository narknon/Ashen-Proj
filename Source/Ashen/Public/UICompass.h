#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ECompassPointType.h"
#include "UICompass.generated.h"

class AQuestPathfindingPoint;
class UUICompassPoint;
class UUICompassPingPoint;
class UImage;
class AQuestPoint;
class UCanvasPanel;
class UAshenEventData;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUICompass : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepathExculsionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepathRefreshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepathRefreshTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUICompassPoint> UI_CompassQuestPointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUICompassPingPoint> UI_CompassPlayerPointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InAreaTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaEntryFadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UniversalCompassPointAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InDungeonAlphaFade;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AQuestPoint*> ActiveCompassPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AQuestPathfindingPoint*> RepathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* QuestPingSpaceRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UImage* CompassGlowRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UImage* CompassLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UImage* CompassRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddPlayerWhenVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UUICompassPingPoint* PlayerPingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UUICompassPingPoint* NorthPingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UUICompassPingPoint* CorpseLootPingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUICompassPoint*> QueuedCompassPointsToAdd;
    
public:
    UUICompass();
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupActiveCompassPoints();
    
    UFUNCTION(BlueprintCallable)
    void RemoveQuestPingMarkers(TArray<AQuestPoint*> PointsToKeep);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNorthIcon();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDownedIcon();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCorpseLootIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAreaExitBarHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAreaEntryBarHighlight();
    
    UFUNCTION(BlueprintCallable)
    void OnTownEntryEvent(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestStateChanged(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnBuddyPingEvent(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnBuddyLostEvent(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnBuddyGainedEvent(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveNPCchanged(UAshenEventData* EventData);
    
protected:
    UFUNCTION(BlueprintCallable)
    UCanvasPanel* GetQuestPingSpace();
    
    UFUNCTION(BlueprintCallable)
    UImage* GetCompassRight();
    
    UFUNCTION(BlueprintCallable)
    UImage* GetCompassLeft();
    
    UFUNCTION(BlueprintCallable)
    UImage* GetCompassGlowRef();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddPlayerIcon(ECompassPointType Type);
    
    UFUNCTION(BlueprintCallable)
    void AddNorthIcon();
    
    UFUNCTION(BlueprintCallable)
    void AddCorpseLootIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCompassPoint(AQuestPoint* Point, AQuestPathfindingPoint* RePathPoint);
    
};

