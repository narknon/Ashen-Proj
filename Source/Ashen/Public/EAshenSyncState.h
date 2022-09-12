#pragma once
#include "CoreMinimal.h"
#include "EAshenSyncState.generated.h"

UENUM(BlueprintType)
enum class EAshenSyncState : uint8 {
    Unsynced,
    CleanupQueued,
    ReadyToSync,
    WaitingForPeerSyncReady,
    SyncingLevels,
    WaitingForLevelSync,
    WaitingForSyncedLevelLoad,
    WaitingForAISpawnManager,
    SyncingAISpawners,
    SyncingActors,
    OpeningActorChannels,
    WaitingForOpenActorChannels,
    Finalizing,
    Synced,
};

