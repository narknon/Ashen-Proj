#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenBaseState.h"
#include "DebugOutputCategory.h"
#include "ENpcType.h"
#include "AshenBaseGameState.generated.h"

class UDataTable;
class AAshenBaseGameMode;
class UUIMapManager;
class UQuestManager;
class AHero;
class UUICompass;
class AActor;
class UTownManager;
class UUIMapAreasWidget;
class UAshenTutorialManager;
class UPlayerEventTracker;
class UAshenEventData;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AAshenBaseGameState : public AAshenBaseState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameMode* GameMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NewQuestLineDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTownManager* TownManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIMapManager* MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUICompass* GameCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TownBuildingConstructionTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUIMapAreasWidget> DefaultMapAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUIMapAreasWidget> DlcMapAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DefaultAreaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DlcAdditionalAreaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DlcIslandAreaData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> QuestAreaData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* LocalHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenTutorialManager* TutorialManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenTutorialManager> TutorialManagerClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerEventTracker* EventTracker;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayerEventTracker> EventTrackerClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugOutputCategory> DebugOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MultiplayerDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CritDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TutorialDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CreatureDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DPSDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WeaponDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TalismanDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ConsumableDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PoiseDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClamberSpotDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugScrollOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCrit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugTalismans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugConsumables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugBuffs;
    
public:
    AAshenBaseGameState();
    UFUNCTION(BlueprintCallable)
    void UpdateExtraNPCHealthbar(ENpcType NPC, bool ShowBar, float HealthPercentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToDebugCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ShouldDisplayDebug(bool& displayDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetGameCompass(UUICompass* CompassRef);
    
private:
    UFUNCTION(BlueprintCallable)
    void ItemTableChangedEvent(UAshenEventData* EventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalHero(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestManager* GetQuestManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetQuestAreaData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIMapManager* GetMapManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUICompass* GetGameCompass();
    
    UFUNCTION(BlueprintCallable)
    AHero* GetCreatureAsHero(ACreature* Creature);
    
    UFUNCTION(BlueprintCallable)
    float GetClampedDebugScrollOffset(float MaxValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenToggleTalismanDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenTogglePoiseDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenToggleCritDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenToggleConsumableDebug();
    
};

