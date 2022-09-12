#pragma once
#include "CoreMinimal.h"
#include "EEnvironmentType.generated.h"

UENUM(BlueprintType)
enum class EEnvironmentType : uint8 {
    Standard,
    Valley,
    Dungeon,
    DungeonLake,
    BossArena,
    HighStructure,
    StormMedium,
    StormIntense,
    OpenField,
    Coastal,
    Cave,
    WetCave,
    CustomType1,
    CustomType2,
    CustomType3,
    CustomType4,
    CustomType5,
    CustomType6,
    CustomType7,
    CustomType8,
    CustomType9,
};

