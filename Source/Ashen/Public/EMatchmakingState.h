#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingState.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingState : uint8 {
    None,
    MultiplayerCleanUp,
    MatchmakingNotApplicable,
    ConnectingToMatchmaking,
    ConnectedToMatchmaking,
    HostCreatingSession,
    HostWaitingForClientSessionJoin,
    ClientJoiningSession,
    ClientWaitingForHostListen,
    HostListeningForClient,
    ClientConnectingToHost,
    HostWaitingForClientListen,
    ClientListeningForHost,
    HostConnectingToClient,
    ClientWaitingToSync,
    HostWaitingToSync,
    HostSyncingClientLevels,
    ClientSyncingHostLevels,
    HostWaitForAISpawnManager,
    ClientWaitForAISpawnManager,
    HostSyncingClientAISpawners,
    ClientSyncingHostAISpawners,
    HostSyncingClientActors,
    ClientSyncingHostActors,
    HostConnected,
    ClientConnected,
    SessionHostFailed,
    SessionJoinFailed,
    MatchmakingConnectionLost,
    PeerConnectionLost,
    MultiplayerEnded,
    Error,
};

