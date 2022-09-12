#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "ENpcType.h"
#include "DialogueDelegateDelegate.h"
#include "EItemQuality.h"
#include "EAshenEventType.h"
#include "AshenEventDelegateDelegate.h"
#include "QuestState.generated.h"

class AStoryHumanoid;
class UDialogueComponent;
class UItemBase;
class AHero;
class UQuestManager;
class UQuestState;
class ULevelSequence;
class UTownManager;
class UQuestNode;
class UQuestLine;

UCLASS(Abstract, Blueprintable)
class ASHEN_API UQuestState : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENpcType> ExcludedCompanionNcps;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueDelegate OnDialogueInteraction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReplaceable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProgressUIQuestState_OnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStoreDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddNPCToMap_OnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStoreQuestInstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AStoryHumanoid>> ActivateQuestGivers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndOfQuest;
    
public:
    UQuestState();
    UFUNCTION(BlueprintCallable)
    void UnlockCraftableTier(EItemQuality Tier, bool ShowUIFanfare, float FanfareDelay);
    
    UFUNCTION(BlueprintCallable)
    void UnlockCraftableItems(TArray<TSubclassOf<UItemBase>> Classes, ENpcType Crafter, bool ShowUIFanfare, float FanfareDelay);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TransitionOut(int32 BranchIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TransitionInto();
    
public:
    UFUNCTION(BlueprintCallable)
    void StoreQuestInstruction(FText QuestName, FText Instructions, FText InstructionsMapVersion);
    
    UFUNCTION(BlueprintCallable)
    void StoreNPCDialogue(FText TextToStore);
    
    UFUNCTION(BlueprintCallable)
    void SetAsActiveQuest();
    
    UFUNCTION(BlueprintCallable)
    void ProgressUIQuestState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProgressToNewStates(const TArray<TSubclassOf<UQuestState>>& NewStateClasses, bool bOnlyIfSolitary, bool bOverrideOtherStates);
    
    UFUNCTION(BlueprintCallable)
    void ProgressToNewState(TSubclassOf<UQuestState> NewStateClass, bool bOnlyIfSolitary, bool bOverrideOtherStates);
    
    UFUNCTION(BlueprintCallable)
    void PlayCinematic(TSoftObjectPtr<ULevelSequence> LevelSequence);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkMapUINPCAsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplaceable() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasDialogueFor(UDialogueComponent* DialogueComponent) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTownManager* GetTownManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestNode* GetQuestNode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestManager* GetQuestManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestLine* GetQuestLine();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetLocalHero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftClassPtr<AStoryHumanoid>> GetActiveQuestGivers();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState(bool bFromLoad);
    
    UFUNCTION(BlueprintCallable)
    void DisplayQuestStartedUiNotification(const FText& QuestName);
    
    UFUNCTION(BlueprintCallable)
    void DisplayQuestCompletedUiNotification(const FText& QuestName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DialogueOwnedByClass(const UDialogueComponent* DialogueComponent, TSoftClassPtr<UObject> ObjectClass) const;
    
    UFUNCTION(BlueprintCallable)
    void BindEventListener(EAshenEventType EventType, const FAshenEventDelegate& Delegate);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddNPCToMap();
    
};

