#pragma once
#include "CoreMinimal.h"
#include "ETrackedPlayerEvent.h"
#include "CombatTutorialStageEntry.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FCombatTutorialStageEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETrackedPlayerEvent, int32> EventRepertitions;
    
    FCombatTutorialStageEntry();
};

