#pragma once
#include "CoreMinimal.h"
#include "EMenuSettingValue.generated.h"

UENUM(BlueprintType)
enum class EMenuSettingValue : uint8 {
    None,
    Volume,
    MusicVolume,
    SFXVolume,
    VoiceOverVolume,
    StaminaVolume,
    Mute,
    EnableSubtitles,
    InvertYAxis,
    InvertMenus,
    SwitchThumbsticks,
    UseMPFilter,
    MPFilterTimesOut,
    MPFilterKey,
    PreferHost,
    DisableMultiplayer,
    DisableAIFollower,
    SoftLockOnEnabled,
    AdventureCamEnabled,
    DoubleTapDodging,
    CameraSensitivity,
    SpearAimSensitivity,
    AllowMouseTargetSwitching,
    ControlInputPreset,
    KeyboardLayout,
    SetGammaNeeded,
    _Max,
};

