#pragma once
#include "CoreMinimal.h"
#include "EAshenEventType.generated.h"

UENUM(BlueprintType)
enum class EAshenEventType : uint8 {
    None,
    Blueprint,
    CreatureSpawn,
    CreatureDeath,
    CreatureStunned,
    CreatureDamage,
    CreatureAction,
    ComponentDestroyed,
    Interaction,
    HeroBeginOverlap,
    HeroEndOverlap,
    HeroSavePointRest,
    HeroSavePointChanged,
    AreaEntered,
    TownEntryEvent,
    ItemReceived,
    ItemUsed,
    ItemDropped,
    ItemTableChanged,
    QuestStateChange,
    TrackedObjectChanged,
    DiasoraFlyInTriggered,
    QueryCallback,
    QuerySuccessCallback,
    PlayerEventsCallback,
    PlayerStateCallback,
    Dialogue,
    NpcStateChanged,
    TownStateChanged,
    NpcAcquired,
    SelectedNPCChanged,
    CraftingMenuOpened,
    NPCExtraHealthBar,
    MultiplayerConnected,
    MultiplayerFinalised,
    MultiplayerLost,
    MatchmakingConnected,
    MatchmakingLost,
    AICompanionSpawned,
    AICompanionDespawned,
    CinematicStart,
    CinematicEnd,
    ZoneStreaming,
    ActiveUserStateChanged,
    TravelPointUsed,
    BuddyPingReceived,
    BuddyWaitingAtDoor,
    BuddyOfferingClimb,
    BuddyDowned,
    BuddyPinned,
    Saving,
    UIOnOffEventType,
    UITutorialEvent,
    UIUnlockLinkedEvent,
    UIFocusEvent,
};
