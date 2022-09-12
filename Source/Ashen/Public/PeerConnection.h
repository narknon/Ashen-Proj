#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnerNetworkStatePack.h"
#include "GameFramework/Info.h"
#include "UObject/NoExportTypes.h"
#include "NetworkPointer.h"
#include "EAshenDamageType.h"
#include "AISpawnerStateResolution.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESyncSpawnerStateResolution.h"
#include "AshenSerialization.h"
#include "AshenDamage.h"
#include "PeerConnection.generated.h"

class UNetConnection;
class UNetDriver;
class UAISpawnManager;
class UMultiplayerManager;
class UMatchmakingManager;
class AAshenGameMode;
class AAISpawnBase;

UCLASS(Blueprintable, NotPlaceable, Transient)
class ASHEN_API APeerConnection : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetDriver* NetDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* Connection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMultiplayerManager* MultiplayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatchmakingManager* MatchmakingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAISpawnManager* AISpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenGameMode* GameMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 AuthorityFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString AuthorityAppState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString AuthorityAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString AuthorityMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTransform AuthorityTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString AuthorityLevelStreaming;
    
    APeerConnection();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateServerExpectsCreatureWakeRemote(bool bExpectsWake, FNetworkPointer NetworkPointer);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UpdateLevelVisibilityAuthority(FName PackageName, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UpdateLevelsVisibilityAuthority(const TArray<FName>& VisiblePackageNames, const TArray<FName>& InvisiblePackageNames);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateHealthRemote(float Delta, EAshenDamageType DamageType, FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateClientExpectsCreatureWakeRemote(bool bExpectsWake, FNetworkPointer NetworkPointer);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncReadyRemote();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncDeferredActorRemote(FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncAISpawnerDataRemote(const FAISpawnerNetworkStatePack& SpawnStatePack);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncAISpawnerCompleteRemote(const TArray<FAISpawnerStateResolution>& Resolutions);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncActorsRemote(const TArray<FNetworkPointer>& NetworkPointers);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SyncActorsCompleteAuthority();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SyncActorRemote(FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SyncActorCompleteAuthority(FNetworkPointer NetworkPointer);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void StopPingPongRemote();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SpawnerReadyRemote(FGuid SpawnerGuid);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SpawnDebugSpawnerAuthorityRemote(TSubclassOf<AAISpawnBase> SpawnerClass, const FSoftObjectPath StringAssetRef, FVector Location, FRotator Rotation, FGuid Guid);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SoftRespawnAuthorityRemote(FGuid Guid);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetSyncSpawnerStateResolution(ESyncSpawnerStateResolution SyncSpawnerStateResolution);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetLevelsRequestedRemote(const TArray<FName>& PackageNames);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetLevelRequestedRemote(FName PackageName, bool bRequested);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ServerWillDespawnRemote(FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ServerStartActionRemote(FAshenSerialization ActionData, FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ServerSendActionDataRemoteUnreliable(FAshenSerialization ActionData, FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ServerSendActionDataRemote(FAshenSerialization ActionData, FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ServerPutToSleepRemote(FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ServerCancelActionRemote(FNetworkPointer NetworkPointer, FGuid ActionGuid);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendPushTargetRemote(FVector Direction, float Distance, FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendPingPongRemote(float WaitTimer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendDamageRemote(FAshenDamage Damage);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ScaleHealthRemote(float CurrentHP, float MaxHP, FNetworkPointer NetworkPointer);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RequestCinematicSkip();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void QueueMultiplayerEndRemote();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void QueueMultiplayerEndAuthority();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PostSyncAISpawnerResolveRemote(const TArray<FAISpawnerStateResolution>& Resolutions, const TArray<FGuid>& AlreadyResolved);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PostSyncAISpawnerDataRemote(const FAISpawnerNetworkStatePack& SpawnStatePack);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OpenChannel();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void OpenActorsChannelsCompleteAuthority();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void MessageRemote(const FString& Message);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ElderDarkIntroRemote(FNetworkPointer ElderDark, FNetworkPointer TargetHero);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void CreatureOnDeathRemote(FNetworkPointer NetworkPointer, FNetworkPointer SourceNetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartActionRemote(FAshenSerialization ActionData, FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendActionDataRemote(FAshenSerialization ActionData, FNetworkPointer NetworkPointer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void BatchUpdateServerExpectsCreatureWakeRemote(const TArray<FNetworkPointer>& NetworkPointers);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void BatchHealthScaleRemote(const TArray<FGuid>& ScaleHealthGuids);
    
};

