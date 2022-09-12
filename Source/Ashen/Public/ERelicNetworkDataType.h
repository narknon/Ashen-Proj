#pragma once
#include "CoreMinimal.h"
#include "ERelicNetworkDataType.generated.h"

UENUM(BlueprintType)
enum class ERelicNetworkDataType : uint8 {
    Shadowfiend_ChargeGained,
    Shadowfiend_AllChargesLost,
    Wake_AshwraithRemoved,
    GefnsBlessing_IncrementMaskStage,
    GefnsBlessing_MaskBroken,
    Fuse_ExplosionCreated,
    Sentinel_BreakWings,
    Sentinel_RestoreWings,
    Riak_WeaponFX,
    InvalidType,
};

