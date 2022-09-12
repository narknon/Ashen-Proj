#pragma once
#include "CoreMinimal.h"
#include "AshenBaseGameMode.h"
#include "AshenLevelStreamingAgent.h"
#include "Engine/DataTable.h"
#include "ETravelPointName.h"
#include "AshenGameMode.generated.h"

class AAshenGameMode;
class ULevelSequence;
class ACreature;
class UMatchmakingManager;
class UMultiplayerManager;
class AWorldTravelPoint;
class UAshenUserWidget;
class AAshenGameState;

UCLASS(Blueprintable, NonTransient)
class ASHEN_API AAshenGameMode : public AAshenBaseGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNetworkMessage, AAshenGameMode*, Source, const FString&, Message);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMultiplayerStateUpdated);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* WorldIntroSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatchmakingManager* MatchmakingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMultiplayerManager* MultiplayerManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultiplayerStateUpdated OnMultiplayerConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMultiplayerStateUpdated OnMultiplayerLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkMessage OnNetworkMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* CurrentBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenLevelStreamingAgent LevelStreamingAgent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> NewGameZoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ZonesRequiredToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldTravelPoint* TravellingPoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LatestLevelStreamWasForTraveling;
    
public:
    AAshenGameMode();
    UFUNCTION(BlueprintCallable)
    void SetRespawnPoint(ETravelPointName PointName);
    
    UFUNCTION(BlueprintCallable)
    void SendGameMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void RequestEndMultiplayer();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBoss(ACreature* Boss, UAshenUserWidget* BossBarWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void QueryMultiplayerStatus(bool& NoMultiplayer, bool& NewIsHost, bool& NewIsClient, bool& NewIsMatchmakingInProgress);
    
    UFUNCTION(BlueprintCallable)
    bool LatestStreamForTraveling();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyncingInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPairingInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOffline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmakingInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClient();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAshenGameState* GetAshenGameState();
    
    UFUNCTION(BlueprintCallable)
    void EndMultiplayer(bool bFromRemote);
    
};

