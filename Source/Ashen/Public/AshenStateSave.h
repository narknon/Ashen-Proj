#pragma once
#include "CoreMinimal.h"
#include "ENpcType.h"
#include "EDiasoraFjordState.h"
#include "EAreaStatus.h"
#include "AshenSave.h"
#include "EGefnState.h"
#include "QuestAreaData.h"
#include "EDiasoraWorldState.h"
#include "ECharacterCreatorValue.h"
#include "EItemQuality.h"
#include "UObject/NoExportTypes.h"
#include "TravelPointData.h"
#include "UObject/NoExportTypes.h"
#include "AshenStateSave.generated.h"

class UAshenEventData;

UCLASS(Blueprintable)
class ASHEN_API UAshenStateSave : public UAshenSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressToUnlockNPCInMap;
    
    UAshenStateSave();
    UFUNCTION(BlueprintCallable)
    void SetTransientGameData(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestAreaStatus(FQuestAreaData QuestAreaDataRow, EAreaStatus AreaStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetNPCProgress(ENpcType NpcType, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetGefnState(EGefnState Dead);
    
    UFUNCTION(BlueprintCallable)
    void SetGameData(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFullUiUnlocked(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDiasoraWorldState(EDiasoraWorldState FlyingState);
    
    UFUNCTION(BlueprintCallable)
    void SetDiasoraFjordState(EDiasoraFjordState FlyingState);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentArea(FName AreaName);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCreatorField(const ECharacterCreatorValue AccessEnum, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaStatus(FName AreaName, EAreaStatus AreaStatus, bool QuestArea);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveNPC_UI(ENpcType NpcType);
    
private:
    UFUNCTION(BlueprintCallable)
    void QuestStateChanged(UAshenEventData* EventData);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkNPCMapQuestAsUpdated(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable)
    bool IsNPC_MapUnlocked(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHardcoreModeEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullUiUnlocked();
    
    UFUNCTION(BlueprintCallable)
    bool HasNPCProgress(ENpcType NpcType, float RequiredAmount);
    
    UFUNCTION(BlueprintCallable)
    bool HasNPCMapUpdate(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWorldIntroPlayed();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUIQuestProgress(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTransientGameData(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetSaveSlotTimeString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemQuality GetQuestUnlockCraftableTierMax() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPromptData(const FString& TutorialPromptName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfAreas() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ENpcType> GetNPCsWithProgress(float ProgressAmount, bool UseMapUnlockProgress);
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetNPCQuestInstructionsRecap(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable)
    float GetNPCProgress(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetNPCDialogueRecaps(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLastActiveSavePointGuid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTravelPointData GetLastActiveSavePointData();
    
    UFUNCTION(BlueprintCallable)
    EGefnState GetGefnState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameProgressString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameData(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable)
    EDiasoraWorldState GetDiasoraWorldState();
    
    UFUNCTION(BlueprintCallable)
    EDiasoraFjordState GetDiasoraFjordState();
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentArea();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCorpseCashAmount();
    
    UFUNCTION(BlueprintCallable)
    FVector GetCorpleLocation(bool& Exists);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterCreatorField(const ECharacterCreatorValue AccessEnum, const FString& ErrorText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAreaStatus GetAreaStatus(FName AreaName, bool QuestArea) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTravelPointData> GetActiveSavePoints();
    
    UFUNCTION(BlueprintCallable)
    ENpcType GetActiveNPC_UI();
    
    UFUNCTION(BlueprintCallable)
    void EnableHardcoreMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesTransientGameDataExist(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesGameDataExist(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable)
    bool CorpseRunDisplayRespawnUI();
    
    UFUNCTION(BlueprintCallable)
    void CompleteGame();
    
    UFUNCTION(BlueprintCallable)
    void ClearTransientGameData();
    
    UFUNCTION(BlueprintCallable)
    void ClearNPCPMapUpdate(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable)
    void AddUIQuestProgress(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable)
    void AddNPCQuestInstructionsRecap(ENpcType NpcType, const FString& QuestName_Namespace, const FString& QuestName_Key, const FString& QuestInstruction_Namespace, const FString& QuestInstruction_Key, const FString& QuestInstructionMap_Namespace, const FString& QuestInstructionMap_Key);
    
    UFUNCTION(BlueprintCallable)
    void AddNPCDialogueRecap(ENpcType NpcType, const FString& Namespace, const FString& Key);
    
};

