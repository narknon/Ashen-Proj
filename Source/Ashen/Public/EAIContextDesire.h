#pragma once
#include "CoreMinimal.h"
#include "EAIContextDesire.generated.h"

UENUM(BlueprintType)
enum class EAIContextDesire : uint8 {
    None,
    Camping_SitAtSpawn,
    Camping_WarmByFire,
    Worship_Pray,
    Worship_Preach,
    Ambush_WaitForTrigger,
    Lookout_Sentry,
    Lookout_Hidden,
    Lookout_Lazy,
    Fortify_DefendPosition,
    Guardian_ProtectGroup,
    Guardian_ProtectItem,
    JumpScare_Lurk,
    Slavery_Slave_Work,
    Slavery_Master_Oversee,
    Slavery_Master_Patrol,
    Wraith_Spooky,
    Challenge_Challenger,
    Challenge_Bouncer,
    Challenge_Spectator,
    Challenge_Completed,
    Challenge_DoorMaiden,
    Bombard_MarkerOrTarget,
    Bombard_OnlyMarker,
    Bombard_OnlyTarget,
    Herd_Forage,
    Herd_Sit,
    Herd_Alerted,
    Herd_Flee,
    Coward_Flee,
    Coward_Beg,
    Total,
};

