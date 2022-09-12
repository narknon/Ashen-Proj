#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENpcType.h"
#include "ENpcOutfitState.h"
#include "ETownBuildingState.h"
#include "ETownBuildingType.h"
#include "TownBuildingData.h"
#include "NpcState.h"
#include "NpcData.h"
#include "TownManager.generated.h"

class AAshenBaseGameMode;
class ULevelStreaming;
class UAshenEventData;

UCLASS(Blueprintable)
class ASHEN_API UTownManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENpcType, int32> NpcMPMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> ForcedLevelsToUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* ForcedLoadedLevel;
    
public:
    UTownManager();
    UFUNCTION(BlueprintCallable)
    void StartNpcHouseBuildTimer(ENpcType NPC);
    
    UFUNCTION(BlueprintCallable)
    void SetTownBuildingState(ETownBuildingType Type, ETownBuildingState State);
    
    UFUNCTION(BlueprintCallable)
    void SetPoolWeight(ENpcType NPC, float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcOutfitState(ENpcType NPC, ENpcOutfitState OutfitState);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcHouseState(ENpcType NPC, ETownBuildingState HouseState);
    
    UFUNCTION(BlueprintCallable)
    void SetHeroInTown(bool InTown);
    
    UFUNCTION(BlueprintCallable)
    void SelectActiveNpc(ENpcType NPC);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStreamingZoneEvent(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnForcedLevelsLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void KillNPC(ENpcType NPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNPCGenderMale(ENpcType NPC) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsNPCDead(ENpcType NPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPool(ENpcType NPC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForcingNpcHouseLoad();
    
    UFUNCTION(BlueprintCallable)
    void IncrementNpcMPMapPair(ENpcType NpcToIncrement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETownBuildingState GetTownBuildingState(ETownBuildingType TownBuildingType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTownBuildingData GetTownBuildingData(ETownBuildingType TownBuildingData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENpcType GetRandomNpcFromPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPoolWeight(ENpcType NPC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoolSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAcquiredNpcs() const;
    
    UFUNCTION(BlueprintCallable)
    FNpcState GetNpcState(ENpcType NpcType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ENpcType> GetNpcsInPool() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetNPCProfession(ENpcType NPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENpcOutfitState GetNpcOutfitState(ENpcType NPC) const;
    
    UFUNCTION(BlueprintCallable)
    FText GetNPCName(ENpcType NPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ENpcType, int32> GetNpcMPMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETownBuildingState GetNpcHouseState(ENpcType NPC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNpcData GetNpcData(ENpcType NPC) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHeroInTown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ENpcType> GetAcquiredNpcs() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateNpcHouseStreaming(ENpcType NPC, ETownBuildingType Building);
    
    UFUNCTION(BlueprintCallable)
    void DecrementNpcMPMapPair(ENpcType NpcToDecrement);
    
    UFUNCTION(BlueprintCallable)
    void AcquireNpc(ENpcType NPC);
    
};

