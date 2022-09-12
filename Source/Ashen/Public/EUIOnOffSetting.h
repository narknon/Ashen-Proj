#pragma once
#include "CoreMinimal.h"
#include "EUIOnOffSetting.generated.h"

UENUM(BlueprintType)
enum class EUIOnOffSetting : uint8 {
    None,
    HUD_ALL,
    Tutorials,
    Interactions,
    ClimbPrompt,
    WorldIcons,
    QuestIcons,
    Compass,
    QuestRecap,
    QuickMenuCons,
    QuickMenuLHRH,
    HealthBarPersonal,
    HealthBarsAlly,
    HealthBarsEnemys,
    LockOnUI,
    Popup_Rewards,
    Popup_Events,
    ExtendedDebugMenu,
    ShowStatsPanel,
    Flow_CompassUnlocked,
    Flow_CaveFallCompleted,
    Flow_MapUnlocked,
    Flow_CompanionUnlocked,
    Flow_NorthIconUnlocked,
    Flow_FastTravelMessageNeeded,
    Flow_PlayerPositionUINotLocked,
    UpdateContextAssetsRequired,
    _Max,
    ConstructFunctionCall,
};

