#include "PeerConnection.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AAISpawnBase;

void APeerConnection::UpdateServerExpectsCreatureWakeRemote_Implementation(bool bExpectsWake, FNetworkPointer NetworkPointer) {
}

void APeerConnection::UpdateLevelVisibilityAuthority_Implementation(FName PackageName, bool bIsVisible) {
}
bool APeerConnection::UpdateLevelVisibilityAuthority_Validate(FName PackageName, bool bIsVisible) {
    return true;
}

void APeerConnection::UpdateLevelsVisibilityAuthority_Implementation(const TArray<FName>& VisiblePackageNames, const TArray<FName>& InvisiblePackageNames) {
}
bool APeerConnection::UpdateLevelsVisibilityAuthority_Validate(const TArray<FName>& VisiblePackageNames, const TArray<FName>& InvisiblePackageNames) {
    return true;
}

void APeerConnection::UpdateHealthRemote_Implementation(float Delta, EAshenDamageType DamageType, FNetworkPointer NetworkPointer) {
}

void APeerConnection::UpdateClientExpectsCreatureWakeRemote_Implementation(bool bExpectsWake, FNetworkPointer NetworkPointer) {
}

void APeerConnection::SyncReadyRemote_Implementation() {
}

void APeerConnection::SyncDeferredActorRemote_Implementation(FNetworkPointer NetworkPointer) {
}

void APeerConnection::SyncAISpawnerDataRemote_Implementation(const FAISpawnerNetworkStatePack& SpawnStatePack) {
}

void APeerConnection::SyncAISpawnerCompleteRemote_Implementation(const TArray<FAISpawnerStateResolution>& Resolutions) {
}

void APeerConnection::SyncActorsRemote_Implementation(const TArray<FNetworkPointer>& NetworkPointers) {
}

void APeerConnection::SyncActorsCompleteAuthority_Implementation() {
}
bool APeerConnection::SyncActorsCompleteAuthority_Validate() {
    return true;
}

void APeerConnection::SyncActorRemote_Implementation(FNetworkPointer NetworkPointer) {
}

void APeerConnection::SyncActorCompleteAuthority_Implementation(FNetworkPointer NetworkPointer) {
}
bool APeerConnection::SyncActorCompleteAuthority_Validate(FNetworkPointer NetworkPointer) {
    return true;
}

void APeerConnection::StopPingPongRemote_Implementation() {
}

void APeerConnection::SpawnerReadyRemote_Implementation(FGuid SpawnerGuid) {
}

void APeerConnection::SpawnDebugSpawnerAuthorityRemote_Implementation(TSubclassOf<AAISpawnBase> SpawnerClass, const FSoftObjectPath StringAssetRef, FVector Location, FRotator Rotation, FGuid Guid) {
}

void APeerConnection::SoftRespawnAuthorityRemote_Implementation(FGuid Guid) {
}

void APeerConnection::SetSyncSpawnerStateResolution_Implementation(ESyncSpawnerStateResolution SyncSpawnerStateResolution) {
}

void APeerConnection::SetLevelsRequestedRemote_Implementation(const TArray<FName>& PackageNames) {
}

void APeerConnection::SetLevelRequestedRemote_Implementation(FName PackageName, bool bRequested) {
}

void APeerConnection::ServerWillDespawnRemote_Implementation(FNetworkPointer NetworkPointer) {
}

void APeerConnection::ServerStartActionRemote_Implementation(FAshenSerialization ActionData, FNetworkPointer NetworkPointer) {
}

void APeerConnection::ServerSendActionDataRemoteUnreliable_Implementation(FAshenSerialization ActionData, FNetworkPointer NetworkPointer) {
}

void APeerConnection::ServerSendActionDataRemote_Implementation(FAshenSerialization ActionData, FNetworkPointer NetworkPointer) {
}

void APeerConnection::ServerPutToSleepRemote_Implementation(FNetworkPointer NetworkPointer) {
}

void APeerConnection::ServerCancelActionRemote_Implementation(FNetworkPointer NetworkPointer, FGuid ActionGuid) {
}

void APeerConnection::SendPushTargetRemote_Implementation(FVector Direction, float Distance, FNetworkPointer NetworkPointer) {
}

void APeerConnection::SendPingPongRemote_Implementation(float WaitTimer) {
}

void APeerConnection::SendDamageRemote_Implementation(FAshenDamage Damage) {
}

void APeerConnection::ScaleHealthRemote_Implementation(float CurrentHP, float MaxHP, FNetworkPointer NetworkPointer) {
}

void APeerConnection::RequestCinematicSkip_Implementation() {
}

void APeerConnection::QueueMultiplayerEndRemote_Implementation() {
}

void APeerConnection::QueueMultiplayerEndAuthority_Implementation() {
}
bool APeerConnection::QueueMultiplayerEndAuthority_Validate() {
    return true;
}

void APeerConnection::PostSyncAISpawnerResolveRemote_Implementation(const TArray<FAISpawnerStateResolution>& Resolutions, const TArray<FGuid>& AlreadyResolved) {
}

void APeerConnection::PostSyncAISpawnerDataRemote_Implementation(const FAISpawnerNetworkStatePack& SpawnStatePack) {
}

void APeerConnection::OpenChannel_Implementation() {
}

void APeerConnection::OpenActorsChannelsCompleteAuthority_Implementation() {
}
bool APeerConnection::OpenActorsChannelsCompleteAuthority_Validate() {
    return true;
}

void APeerConnection::MessageRemote_Implementation(const FString& Message) {
}

void APeerConnection::ElderDarkIntroRemote_Implementation(FNetworkPointer ElderDark, FNetworkPointer TargetHero) {
}

void APeerConnection::CreatureOnDeathRemote_Implementation(FNetworkPointer NetworkPointer, FNetworkPointer SourceNetworkPointer) {
}

void APeerConnection::ClientStartActionRemote_Implementation(FAshenSerialization ActionData, FNetworkPointer NetworkPointer) {
}

void APeerConnection::ClientSendActionDataRemote_Implementation(FAshenSerialization ActionData, FNetworkPointer NetworkPointer) {
}

void APeerConnection::BatchUpdateServerExpectsCreatureWakeRemote_Implementation(const TArray<FNetworkPointer>& NetworkPointers) {
}

void APeerConnection::BatchHealthScaleRemote_Implementation(const TArray<FGuid>& ScaleHealthGuids) {
}

void APeerConnection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APeerConnection, AuthorityFPS);
    DOREPLIFETIME(APeerConnection, AuthorityAppState);
    DOREPLIFETIME(APeerConnection, AuthorityAction);
    DOREPLIFETIME(APeerConnection, AuthorityMovementMode);
    DOREPLIFETIME(APeerConnection, AuthorityTransform);
    DOREPLIFETIME(APeerConnection, AuthorityLevelStreaming);
}

APeerConnection::APeerConnection() {
    this->NetDriver = NULL;
    this->Connection = NULL;
    this->MultiplayerManager = NULL;
    this->MatchmakingManager = NULL;
    this->AISpawnManager = NULL;
    this->GameMode = NULL;
    this->AuthorityFPS = 0;
}

