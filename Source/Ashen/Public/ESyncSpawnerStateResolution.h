#pragma once
#include "CoreMinimal.h"
#include "ESyncSpawnerStateResolution.generated.h"

UENUM(BlueprintType)
enum class ESyncSpawnerStateResolution : uint8 {
    None,
    Disconnected,
    NullPlayerController,
    NullAshenPlayerController,
    InvalidLocalPlayer,
    NullLocalHero,
    LocalRemoteSpawnerCountDifference,
    HeroesTooClose,
    InvalidClientCameraData,
    AIActiveOnBothSides,
    LocalAIDeadRemoteAIActive,
    LocalAIDeadRemoteAIInactiveTooClose,
    RemoteAIDeadLocalAIInactiveTooClose,
    RemoteAIDeadLocalAIActive,
    GroupOwnershipConflict,
    SyncSpawnerStateError,
    SyncSpawnerNotSafeToResolve,
    LocalResolutionRemoteSpawnerCountDifference,
    CanBeSynced,
};

