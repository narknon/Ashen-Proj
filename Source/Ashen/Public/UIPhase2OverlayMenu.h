#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIPhase2Menu.h"
#include "DialogueSettings.h"
#include "EUIPopupQueType.h"
#include "OverlayDialogueInput.h"
#include "OverlayTextInput.h"
#include "OverlayTutorialInput.h"
#include "OverlayTownPersonInput.h"
#include "OverlayItemInput.h"
#include "EInputUIEventTypes.h"
#include "AshenDamage.h"
#include "ERewardType.h"
#include "UIPhase2OverlayMenu.generated.h"

class UUIPopupText;
class UAshenUserWidget;
class UUserWidget;
class UUIPopupTownsperson;
class UAshenEventData;
class UUIPhase2OverlayTab;
class UItemTable;
class UItemBase;
class UUIPhase2MenuTab;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPhase2OverlayMenu : public UUIPhase2Menu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UAshenUserWidget> TownFoundedPopupWidgetRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UUserWidget> SkipCinematicButtonWidgetRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UUIPopupTownsperson> TownsPersonPopupWidgetRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UUIPopupText> TextPopupWidgetRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UUIPopupText> ZoneDisplayPopupWidgetRef;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UUIPopupText> SecretZoneDisplayPopupWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueSettings> DialogueFormats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PausePopupFadeIns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoneDiscoveryDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayDialogueInput> DialogueQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIPopupQueType, bool> WaitCalls;
    
    UUIPhase2OverlayMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerScreenFlash(float Duration, float InitialOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSkipButton(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenStatus(EUIPopupQueType Type, bool Opened);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeHudPopupQueue(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimeSinceDialogue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveDownedBuddyCompassPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHudAlertFlash(bool ResetAnimation, bool UseStamBarOutlineEffect, bool UseBroadGlowEffect, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseHudPopupQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenZoneTab(FOverlayTextInput ZoneInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTutorialTab(FOverlayTutorialInput TutorialInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTownpersonTab(FOverlayTownPersonInput TownPersonInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenTownFoundedTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenSecretZoneTab(FOverlayTextInput SecretZoneInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenRHEquip_Tab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenLHEquip_Tab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenItemAdditionTab(FOverlayItemInput ItemInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenInventoryFullTab(FOverlayItemInput ItemInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenHUD_Tab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenGeneralTextTab(FOverlayTextInput GeneralTextInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUIPhase2OverlayTab* OpenDialogueTab(FOverlayDialogueInput DialogueSnippetInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenConsEquip_Tab();
    
    UFUNCTION(BlueprintCallable)
    void OnQuestStateChanged(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDamage(const FAshenDamage& DamageDescription);
    
    UFUNCTION(BlueprintCallable)
    void OnNpcAcquired(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMPFinalized(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(UItemTable* Source, UItemBase* ItemRef);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(UItemTable* Source, UItemBase* ItemRef);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryFull(UItemTable* Source, UItemBase* ItemRef);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredArea(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveNPCchanged(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HeroDamageUIEvent(const FAshenDamage& DamageDescription, bool LocalHeroHit);
    
    UFUNCTION(BlueprintCallable)
    bool GetWaitNeeded(EUIPopupQueType Type);
    
    UFUNCTION(BlueprintCallable)
    TArray<EUIPopupQueType> GetWaitList(EUIPopupQueType TabType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitPopupFadouts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExitMenuFadeins();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterPopupFadouts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterMenuFadouts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayQuestStartedNotification(const FText& QuestName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayQuestCompleteNotification(const FText& QuestName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CurrencyAdditionUI(int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Controller_APressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseTutorialTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseLHAndRHTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDialogTab_wWrapAround(UUIPhase2OverlayTab* DialogueTab);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDialogTab(UUIPhase2OverlayTab* DialogueTab);
    
    UFUNCTION(BlueprintCallable)
    void BuildWaitList();
    
    UFUNCTION(BlueprintCallable)
    void BindActionPopupOnClosure(UUIPhase2MenuTab* Tab, bool Remove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginCloseActionPopup(UUIPhase2MenuTab* RemovedTabRef, EInputUIEventTypes Button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddQuestRewardUiItem(ERewardType RewardType, int32 RewardAmount, UItemBase* RewardItem, TSubclassOf<UItemBase> CraftUnlockClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActionPopup(UUIPhase2MenuTab* RemovedTabRef, EInputUIEventTypes Button);
    
};

