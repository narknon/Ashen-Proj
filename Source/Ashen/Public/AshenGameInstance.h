#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/GameInstance.h"
#include "EActiveUserState.h"
#include "DialogueInputs.h"
#include "Fonts/SlateFontInfo.h"
#include "SubtitleInfo.h"
#include "EPlatformSpecific.h"
#include "InputBindingDataSet.h"
#include "EUIOnOffSetting.h"
#include "ETravelPointName.h"
#include "TravelPointData.h"
#include "LoadingScreenID.h"
#include "EFPSRate.h"
#include "EInputContext.h"
#include "AshenGameInstance.generated.h"

class UStringTable;
class UAshenStateSave;
class UPaperFlipbook;
class UQuestState;
class UPaperSprite;
class UWorld;
class UUISystemNotification;
class UUserWidget;
class UDataTable;
class UAshenProfileSave;
class UAkAudioEvent;
class UQuestLine;
class AWorldTravelPoint;

UCLASS(Blueprintable, NonTransient)
class ASHEN_API UAshenGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDialogueInputs> AllQuestDialogues;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPaperSprite*> LoadingSpinnerSprites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperFlipbook> LoadingSpinnerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadingSkipActionName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo SubtitleFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo ToolTipFontInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubtitleInfo> OpeningCinematicSubtitles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> LoadingScreenTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> LoadingScreenTips_NonConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStringTable> InteractionPromptMessages;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatformSpecific UIFakePlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UIFakeThePlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UIFakeInShipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UIFakeSteam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUISystemNotification> SystemNotificationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SystemNotificationWidgetZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUISystemNotification*> QueuedSystemNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ControllerDisconnectWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerDisconnectWidgetZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* ControllerDisconnectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContinueActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> MainMenuLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveInvalidatedUINeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CaveFallTitleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AreaDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GraphicsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputBindingDataSet> PredefinedInputsSets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSaveSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackupSaveFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenProfileSave* AshenProfileSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenStateSave* AshenStateSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> StartupAudioEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FastTravelAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AppDeactivateAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AppReactivateAudioEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* TutorialQuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestState> TutorialQuestCompleteClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> DeathMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastDeathMessage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWorldTravelPoint*> CurrentMapTravelPoints;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchmakingVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckLocalDLC;
    
public:
    UAshenGameInstance();
    UFUNCTION(BlueprintCallable)
    void UpdateSaves();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAchievementProgress(const FString& AchievementId);
    
    UFUNCTION(BlueprintCallable)
    bool UIOptionEnabled(EUIOnOffSetting Setting, bool IgnoreAllHidden);
    
    UFUNCTION(BlueprintCallable)
    bool TryTravelToNonActiveTravelPoint(ETravelPointName PointName);
    
    UFUNCTION(BlueprintCallable)
    AWorldTravelPoint* TryGetTravelPoint(ETravelPointName PointName);
    
    UFUNCTION(BlueprintCallable)
    void TravelToPoint(FTravelPointData TravelPointData, bool TravelingViaDiasora);
    
    UFUNCTION(BlueprintCallable)
    void SetUIOptionEnabled(EUIOnOffSetting Setting, bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNextLoadScreens(TEnumAsByte<LoadingScreenID> NextType);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadedStateSave(UAshenStateSave* InAshenStateSave);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertedControls(bool _invert);
    
    UFUNCTION(BlueprintCallable)
    void SetHZBSettingsEnabbled();
    
    UFUNCTION(BlueprintCallable)
    void SetHZBSettingsDissabled();
    
    UFUNCTION(BlueprintCallable)
    void SetFPSCap(EFPSRate FPSCap, bool ApplyNow);
    
    UFUNCTION(BlueprintCallable)
    void SetCulture(const FString& NewCulture);
    
    UFUNCTION(BlueprintCallable)
    void ResetSteamAchievements();
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveData();
    
    UFUNCTION(BlueprintCallable)
    void QueueSystemNotification(FText Text, float LifeTime, TSubclassOf<UUISystemNotification> ClassOverride);
    
    UFUNCTION(BlueprintCallable)
    void LockInGraphicsSettings(bool ResetToLastVales);
    
    UFUNCTION(BlueprintCallable)
    UAshenStateSave* LoadTemporaryStateSave(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    bool LoadDebugSave(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    bool LastTravelViaDiasora();
    
    UFUNCTION(BlueprintCallable)
    bool IsUseingSteam();
    
    UFUNCTION(BlueprintCallable)
    bool IsSpawnTravelPointGuidValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaveDataInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestLineAt(UQuestLine* QuestLine, TSubclassOf<UQuestState> QuestStateClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlatformXboxOne() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlatformConsole() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLocalPlayerMale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentUserControllerConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerPaired();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControllerEngaged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectedToOnlineServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSave(int32 SlotNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSaveSlotName(int32 SlotNum);
    
    UFUNCTION(BlueprintCallable)
    FString GetRandomDeathMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerNickname() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlatformSpecific GetPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSaveSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertedControls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEngagedControllerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetDebugSaveNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputContext GetCurrentInputContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAshenStateSave* GetAshenStateSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAshenProfileSave* GetAshenProfileSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetandClearLastDeathMessage(FString& _DeathMessage);
    
    UFUNCTION(BlueprintCallable)
    TArray<AWorldTravelPoint*> GetAllLoadedTravelPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EActiveUserState GetActiveUserState() const;
    
    UFUNCTION(BlueprintCallable)
    void Gather_QuestDialogue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExitGameOnXbox() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLoadingScreen(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteSaveSlotData(int32 SaveSlot);
    
    UFUNCTION(BlueprintCallable)
    void DeathLoadLogic();
    
    UFUNCTION(BlueprintCallable)
    void CreateSlotSave(int32 SlotSaveNum);
    
    UFUNCTION(BlueprintCallable)
    void CreateNamedDebugSave(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    void CreateDebugSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConsumeShowSignedInChangeErrorFlag();
    
    UFUNCTION(BlueprintCallable)
    void ClearLastTravelViaDiasora();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUserPlayOnline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayNightstormDLC() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginLoadingScreen(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void ApplyGraphicsSettings(bool ResetSavedSettingsToLockedInValues);
    
};

